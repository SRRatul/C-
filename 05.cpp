#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"Enter the third number: "<<endl;
    cin>>num3;
    if(num1 >= num2 && num1 >= num3){
        cout<<"The largest number is "<<num1<<endl;
    }
    else if (num2 >= num3 && num2 >= num1){
        cout<<"The largest number is "<<num2<<endl;
    }
    else{
        cout<<"The largest number is " << num3<<endl;
    }
    return 0;
}
