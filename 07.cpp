//Write a program that asks the user for the length and width of a rectangle and prints its area and perimeter.
#include<iostream>
using namespace std;
double area(double length, double width){
return length * width;
}
double perimeter(double length, double width){
return 2 * (length + width);
}
int main(){
    double len = 0, wid = 0;
    cout<<"Enter the length"<<endl;
    cin>>len;
    cout<<"Enter the width" << endl;
    cin>>wid;
    double area_rec = area(len, wid);
    double perimeter_rec = perimeter(len, wid);
    cout<<"Area: " << area_rec<<endl;
    cout<<"Perimeter: "<< perimeter_rec<<endl;
return 0;
}
