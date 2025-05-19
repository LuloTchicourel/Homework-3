#pragma once
#include "Pressure.hpp"
#include "Position.hpp"

class SaveFlightData {
public:
    Position pos;
    Pressure psi;

    SaveFlightData(const Position& p, const Pressure& q);
    void serialize(ofstream& out) const;
    void deserialize(ifstream& in);
    void print();
    ~SaveFlightData() = default;
};