#include "../Headers/SaveFlightData.hpp"

SaveFlightData::SaveFlightData(const Position& p, const Pressure& q) : pos(p), psi(q) {} 

void SaveFlightData::serialize(ofstream& out) const {
    pos.serialize(out); psi.serialize(out);
}

void SaveFlightData::deserialize(ifstream& in) {
    pos.deserialize(in); psi.deserialize(in);
}

void SaveFlightData::print(){
    cout << "== Position ==\n";
    cout << "Latitude: " << pos.latitude << endl;
    cout << "Longitude: " << pos.longitude << endl;
    cout << "Altitude: " << pos.altitude << endl;
    cout << "Time: " << pos.get_time() << "s" << endl;
    cout << "----------------------\n";
    cout << "== Pressure ==\n";
    cout << "Static Pressure: " << psi.static_pressure << endl;
    cout << "Dynamic Pressure: " << psi.dynamic_pressure << endl;
    cout << "Time: " << psi.get_time() << "s" << endl;
}