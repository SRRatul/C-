//Write a program to convert temperatures between Celsius and Fahrenheit. The user should input the temperature and specify the conversion type.
#include<iostream>
using namespace std;
double celsius_to_fahrenheit(double celsius){
return ((celsius / 5)* 9)+32;
}
double fahrenheit_to_celsius(double fahrenheit){
return ((fahrenheit - 32)/9)*5;
}
int main(){
    cout<<" || Welcome to Salverter || " <<endl;
    cout<<" Enter the number (1 or 2) "<<endl;
    cout<<"1. Celsius to Fahrenheit. "<<endl;
    cout<<"2. Fahrenheit to Celsius. " << endl;
    cout<<" Enter your choice here : ";
    int choice;
    cin>>choice;
    if(choice == 1){
        double celc;
        cout<<"Enter Celsius : " <<endl;
        cin>>celc;
        double c2f = celsius_to_fahrenheit(celc);
        cout<<celc<<" C = " << c2f<<" F";
    }
    if(choice == 2){
        double fahren;
        cout<<"Enter Fahrenheit : " <<endl;
        cin>>fahren;
        double f2c = fahrenheit_to_celsius(fahren);
        cout<<fahren<<" F = " << f2c <<" C";
    }

return 0;
}
