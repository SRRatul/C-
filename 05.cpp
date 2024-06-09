#include <iostream>
using namespace std;
double simple_interest (double principal, double rate, double time){
    return (principal * rate * time)/100 ;
}
int main(){
   double principal, rate, time;
    cout<<"Enter your principal amount: ";
    cin>>principal;
    cout<<"Enter your interest rate (%) : ";
    cin>>rate;
    cout<<"Enter your time period (in years): ";
    cin>>time;
    double interest = simple_interest(principal, rate, time);
    cout<<"Your interest is "<<interest<<" TK"<<endl;
    return 0;
}
