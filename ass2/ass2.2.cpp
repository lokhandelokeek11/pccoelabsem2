#include<iostream>
using namespace std;

class FibonacciSeries {
public:
    void generateseries(int n) {
        int n1 = 0, n2 = 1;
        cout << "Fibonacci series: " << endl;
        cout << n1 << endl;
        cout << n2 << endl;

        for (int i = 2; i < n; ++i) {
            int next = n1 + n2;
            cout << next << endl;
            n1 = n2;
            n2 = next;
        }
    }
};

int main() {
    FibonacciSeries sample1;
    int numberOfTerms;

    cout << "Enter the number of terms: ";
    cin >> numberOfTerms;

    sample1.generateseries(numberOfTerms);

    return 0;
}
