#include <iostream>
using namespace std;

class SumOfDigits {
private:
    int number, sum, rem;

public:
    void input() {
        cout << "Enter the Number: ";
        cin >> number;
    }

    int calculateSum() {
        sum = 0;
        while (number != 0) {
            rem = number % 10;
            sum = sum + rem;
            number = number / 10;
        }
        return sum;
    }
};

int main() {
    SumOfDigits s;
    int sum;
    s.input();
    sum = s.calculateSum();
    cout << "Sum of Digits of the number = " << sum << endl;
    return 0;
}