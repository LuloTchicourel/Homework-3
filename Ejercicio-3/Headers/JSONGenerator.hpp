#pragma once
#include "DataCollector.hpp"

class JSONGenerator {
private:
    vector<pair<string, string>> data;
public:
    template<typename T>
    void add(const string& tag, const DataCollector<T>& info){
        data.push_back(make_pair(tag, info.process()));
    }
    void make() const;
};