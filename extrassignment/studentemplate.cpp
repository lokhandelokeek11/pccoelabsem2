#include<iostream>
using namespace std;

template<class T>
class Students{
    public: 
    T marks1;
    T marks2;
    Students(T mrk1, T mrk2){
        this->marks1 = mrk1;
        this->marks2 = mrk2;
    }
    T calculateTotal(){
        return marks1 + marks2;
    }
};

int main(){
    Students<int> studentsample(90,89);
    cout<<"Total marks of student 1 (int marks): "<<studentsample.calculateTotal()<<endl;

    Students<float> studentsample2(65.7,89.9);
    cout<<"Total marks of student 2 (float marks): "<<studentsample2.calculateTotal()<<endl;
    return 0;
}