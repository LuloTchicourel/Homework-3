#include "../Headers/Pressure.hpp"

Pressure::Pressure(float p, float q, float t) : BaseMeasurement(t),
    static_pressure(p), dynamic_pressure(q) {}

Pressure::Pressure(const Pressure& p) : BaseMeasurement(*p.time),
static_pressure(p.static_pressure), dynamic_pressure(p.dynamic_pressure) {}

void Pressure::serialize(ofstream& out) const {
    BaseMeasurement::serialize(out);
    out.write(reinterpret_cast<const char*>(&static_pressure), sizeof(float));
    out.write(reinterpret_cast<const char*>(&dynamic_pressure), sizeof(float));
}

void Pressure::deserialize(ifstream& in) {
    BaseMeasurement::deserialize(in);
    in.read(reinterpret_cast<char*>(&static_pressure), sizeof(float));
    in.read(reinterpret_cast<char*>(&dynamic_pressure), sizeof(float));
}