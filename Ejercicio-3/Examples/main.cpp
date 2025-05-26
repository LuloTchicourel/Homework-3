#include "../Headers/JSONGenerator.hpp"
#include "../Headers/DataCollector.hpp"

int main() {
    DataCollector<double> dc_double;
    dc_double.add(1.3);
    dc_double.add(2.1);
    dc_double.add(3.2);

    DataCollector<std::string> dc_string;
    dc_string.add("Hola");
    dc_string.add("Mundo");

    DataCollector<std::vector<int>> dc_matrix;
    dc_matrix.add({1, 2});
    dc_matrix.add({3, 4});

    JSONGenerator json;
    json.add("vec_doubles", dc_double);
    json.add("palabras", dc_string);
    json.add("listas", dc_matrix);

    json.make();

    return 0;
}