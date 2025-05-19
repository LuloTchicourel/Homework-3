#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class IMeasurement {
public:
    virtual void serialize(ofstream& out) const = 0;
    virtual void deserialize(ifstream& in) = 0;
    ~IMeasurement() = default;
};
