#include "../Headers/Position.hpp"

Position::Position(float la, float lo, float al, float t) : BaseMeasurement(t), 
    latitude(la), longitude(lo), altitude(al) {}

Position::Position(const Position& p) : BaseMeasurement(*p.time),
    latitude(p.latitude), longitude(p.longitude), altitude(p.altitude) {}

void Position::serialize(ofstream& out) const {
    BaseMeasurement::serialize(out);
    out.write(reinterpret_cast<const char*>(&latitude), sizeof(float));
    out.write(reinterpret_cast<const char*>(&longitude), sizeof(float));
    out.write(reinterpret_cast<const char*>(&altitude), sizeof(float));
}

void Position::deserialize(ifstream& in) {
    BaseMeasurement::deserialize(in);
    in.read(reinterpret_cast<char*>(&latitude), sizeof(float));
    in.read(reinterpret_cast<char*>(&longitude), sizeof(float));
    in.read(reinterpret_cast<char*>(&altitude), sizeof(float));
}