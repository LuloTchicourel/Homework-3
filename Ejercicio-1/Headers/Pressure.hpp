#pragma once
#include "BaseMeasurement.hpp"

class Pressure : public BaseMeasurement {
public:
    float static_pressure;
    float dynamic_pressure;

    Pressure(float p, float q, float t);
    // Para desrefrenciar uno ya creado:
    Pressure(const Pressure& p);
    void serialize(ofstream& out) const override;
    void deserialize(ifstream& in) override;
    ~Pressure() = default;
};