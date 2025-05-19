#include "Headers/SaveFlightData.hpp"

int main(){
    Position pos(-34.6f, -58.4f, 950.0f, 5.3f);
    Pressure psi(101.3f, 5.8f, 6.1f);

    SaveFlightData sfd(pos, psi);

    cout << "== Pre-Serialization ==" << endl;
    sfd.print();
    cout << "==============================" << endl;

    ofstream out("tester.bin", ios::binary);
    if(!out.is_open()){
        cerr << "Error opening writing file..." << endl;
        return 1;
    }
    sfd.serialize(out);
    out.close();

    cout << "SaveFlightData has been serialized..." << endl;

    ifstream in("tester.bin", ios::binary);
    if(!in.is_open()){
        cerr << "Error opening retrieving file..." << endl;
        return 1;
    }
    SaveFlightData new_sfd(Position(0, 0, 0, 0), Pressure(0, 0, 0));
    new_sfd.deserialize(in);
    in.close();
    cout << "New SaveFlightData has been deserialized..." << endl;
    cout << "==============================" << endl;

    cout << "== Post-Deserialization ==" << endl;
    new_sfd.print();
    
    cout << "==============================" << endl;
    cout << "Process finished, exiting program..." << endl;
    return 0;
}