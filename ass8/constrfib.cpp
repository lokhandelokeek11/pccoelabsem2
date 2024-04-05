#include <iostream>
using namespace std;

class fibbonaci {
    int n;
    int a, b;

public:
    fibbonaci() {
        a = 0;
        b = 1;
    }

    void getdata() {
        cout << "Enter the value: ";
        cin >> n;
    }

    void calculate() {
        int temp;
      
        for (int i = 2; i < n; i++) {
                   cout << "Fibbonacci Series is: " << a << b << endl;
            temp = a + b;
            cout << "," << endl;
            a = b;
            b = temp;
       
        }
    }
};

int main() {
    fibbonaci sample;
    sample.getdata();
    sample.calculate();
    return 0;
}