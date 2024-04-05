#include <iostream>
using namespace std;

class GallonsToCubicFeetConverter {
public:
    double gallons;

    void convert() {
        double conversionFactor = 1.0 / 7.481;
        cubicFeet = gallons * conversionFactor;
    }

    void Result() {
        cout << "The number of cubic feet is: " << cubicFeet << endl;
    }

private:
    double cubicFeet;
};

int main() {
    GallonsToCubicFeetConverter converter;

    cout << "Enter the number of gallons: ";
    cin >> converter.gallons;
    converter.convert();
    converter.Result();

    return 0;
}
