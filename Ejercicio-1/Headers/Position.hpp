#pragma once
#include "BaseMeasurement.hpp"

class Position : public BaseMeasurement {
public:
    float latitude;
    float longitude;
    float altitude;
    
    Position(float la, float lo, float al, float t);
    // Para desrefrenciar uno ya creado:
    Position(const Position& p);
    void serialize(ofstream& out) const override;
    void deserialize(ifstream& in) override;
    ~Position() = default;
};