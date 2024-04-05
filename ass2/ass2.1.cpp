#include <iostream>
using namespace std;

class SumCalculator {
private:
    int num;
    int sum;

public:
    SumCalculator() {
        sum = 0;
    }
    void inputNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void calculateSum() {
        int temp = num;
        while (temp > 0) {
            int reminder = temp % 10;
            sum = sum + reminder;
            temp = temp / 10;
        }
    }


    void displaySum() {
        cout << "Sum of digits: " << sum << endl;
    }
};

int main() {
    SumCalculator calculator;

    calculator.inputNumber();
    calculator.calculateSum();
    calculator.displaySum();

    return 0;
}
