#include "../Headers/FigureProcessor.hpp"

int main(){
    // creo circulos y su procesador
    cout << "== CIRCLE TEST ==" << endl;
    FigureProcessor<Circle> fpc;
    Circle c1(3.0f, Point(-10.0f, 2.0f));
    try {
        // testeo el error
        Circle c2(-4.5f, Point(0.0f, 0.0f));
        // no deberia llegar a ejecutarse esto por el error
        cout << "Circle 2 area: " << fpc.calculate_area(c2) << endl;
    }
    catch (const invalid_argument& e){
        cerr << "Error: " << e.what() << endl;
    }
    cout << "Circle 1 area: " << fpc.calculate_area(c1) << endl;

    // ahora con elipses
    cout << "== ELLIPSE TEST ==" << endl;
    FigureProcessor<Ellipse> fpe;
    Ellipse e1(4.2f, 1.0f, Point(3.0f, 1.1f));
    try {
        // testeo el error
        Ellipse e2(-4.5f, -3.3f, Point(0.0f, 0.0f));
        // no deberia llegar a ejecutarse esto por el error
        cout << "Ellipse 2 area: " << fpe.calculate_area(e1) << endl;
    }
    catch (const invalid_argument& e){
        cerr << "Error: " << e.what() << endl;
    }
    cout << "Ellipse 1 area: " << fpe.calculate_area(e1) << endl;

    // con rectangulos
    cout << "== RECTANGLE TEST ==" << endl;
    FigureProcessor<Rectangle> fpr;
    Rectangle r1(Point(1.0f, 0.0f), 21.0f, 2.3f);
    try {
        // testeo el error
        Rectangle r2(Point(0.0f, 0.0f), -12.2f, -3.2f);
        // no deberia llegar a ejecutarse esto por el error
        cout << "Rectangle 2 area: " << fpr.calculate_area(r1) << endl;
    }
    catch (const invalid_argument& e){
        cerr << "Error: " << e.what() << endl;
    }
    cout << "Rectangle 1 area: " << fpr.calculate_area(r1) << endl;

    cout << "Process finished..." << endl;
    return 0;
}