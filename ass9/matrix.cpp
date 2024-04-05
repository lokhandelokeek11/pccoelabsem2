#include <iostream>
using namespace std;

class matrix {
public:
    int rows;
    int cols;
    int matrix1[100][100];
    int matrix2[100][100]; 
    int result[100][100];  

    void input();
    void calculate();
    void show();
};

void matrix::input() {
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if(rows == cols){
    cout << "Enter the values of matrix 1: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter the values of matrix 2: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
          }
        }
    }
}  

void matrix::calculate() {
  
    int choice;
    cout << "Enter the operation you want to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    
    cin >> choice;

    switch (choice) {
        case 1:
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            break;

        case 2:
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }
            break;
        case 3:
            for(int i = 0; i<rows; i++){
                for (int j = 0; j<cols; j++){
                    result[i][j] = matrix1[i][j] * matrix2[i][j];
                }
            }
        default:
            cout << "Invalid choice!";
            return;
    }
}

void matrix::show() {
    cout << "Result of the Matrix:" << endl;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    matrix sample;
    
    sample.input();
    
    sample.calculate();
    
    sample.show();

    return 0;
}