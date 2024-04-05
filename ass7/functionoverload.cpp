#include<iostream>
using namespace std;

class Shape{
    public:
    float dimension1;
    float dimension2;
    float dimension3;
    void calArea(float side1, float side2);
    void calArea();
};
void Shape :: calArea(float side1, float side2){
    dimension1 = side1;
    dimension2 = side2;
    float result;
    result = dimension1 * dimension2;
    cout<<"The area of the rectangle is: "<<result<<endl;
}
void Shape :: calArea(){
    float Height;
    cout<<"Enter height of traingle: ";
    cin>>Height;
    float Base;
    cout<<"Enter base of triangle: ";
    cin>>Base;
    float result;
    result = 0.5 * Height * Base;
    cout<<"The area of the triangle is: "<<result<<endl;
}
int main(){
    Shape sample;
    float length, breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    sample.calArea(length, breadth);
    sample.calArea();
    return  0;
}