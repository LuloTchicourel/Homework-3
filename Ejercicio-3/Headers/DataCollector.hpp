#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <type_traits>

using namespace std;

template<typename T>
class DataCollector {
private:
    vector<T> data;
public:
    void add(const T& stuff) {data.push_back(stuff);}
    string process() const {
        if constexpr (is_same_v<T, double>){
            string processed_data = "[";
            for (size_t i = 0; i < data.size(); i++){
                ostringstream oss;
                oss << fixed << setprecision(1) << data[i];
                processed_data += oss.str();
                if (i != data.size() - 1)
                    processed_data += ", ";
            }
            processed_data += "]";
            return processed_data;
        }
        else if constexpr (is_same_v<T, string>){
            string processed_data = "[";
            for (size_t i = 0; i < data.size(); i++){
                processed_data += "\"" + data[i] + "\"";
                if (i != data.size() - 1)
                    processed_data += ", ";
            }
            processed_data += "]";
            return processed_data;
        }
        else if constexpr (is_same_v<T, vector<int>>){
            string processed_data = "[\n";
            for (size_t i = 0; i < data.size(); i++){
                processed_data += "\t   [";
                for (size_t j = 0; j < data[i].size(); j++){
                    processed_data += to_string(data[i][j]);
                    if (j != data[i].size() - 1)
                        processed_data += ", ";            
                }
                processed_data += "]";
                if (i != data.size() - 1)
                    processed_data += ",\n";
                else processed_data += "\n";
            }
            processed_data += "\t   ]";
            return processed_data;
        }
        else throw invalid_argument("\"Unable to process data type...\"");
    }
};