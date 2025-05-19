#include "../Headers/BaseMeasurement.hpp"

BaseMeasurement::BaseMeasurement(float t) : time(make_unique<float>(t)) {}

float BaseMeasurement::get_time() const {return *time;}

void BaseMeasurement::serialize(ofstream& out) const {
    out.write(reinterpret_cast<const char*>(&*time), sizeof(float));
}

void BaseMeasurement::deserialize(ifstream& in) {
    float t;
    in.read(reinterpret_cast<char*>(&t), sizeof(float));
    time = make_unique<float>(t);
}

