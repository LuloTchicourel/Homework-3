#include "../Headers/JSONGenerator.hpp"

void JSONGenerator::make() const {
    cout << "{";
    for (size_t i = 0; i < data.size(); ++i) {
        if (i == 0)
            cout << " \"" << data[i].first << "\": " << data[i].second;
        else if (i != 0) 
            cout << "  \"" << data[i].first << "\": " << data[i].second;
        if (i < data.size() - 1)
            cout << ",";
        cout << endl;
    }
    cout << "}" << endl;
}