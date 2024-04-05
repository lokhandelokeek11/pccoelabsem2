#include <iostream>
using namespace std;

class ArraySearch {
public:
    int size;
    int arr[100]; 


    void inputElements() {
        cout << "Enter the size of array: ";
        cin >> size;

        cout << "Enter the elements of array: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void searchElement(int search) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == search) {
                cout << "Element found at index: " << i << endl;
                return; 
            }
        }

        cout << "Element not found in the array." << endl;
    }
};

int main() {
    ArraySearch arraySearch;
    int search;

    arraySearch.inputElements();

    cout << "Enter the element to be searched: ";
    cin >> search;

    arraySearch.searchElement(search);

    return 0;
}
