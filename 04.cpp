// A program that asks the user for three numbers and prints the largest one. 
#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    // ask user for 3 numbers
    cout << " Enter the first number :";
    cin >> num1;
    cout<< "Enter the Second number: ";
     cin >> num2;
    cout<< "Enter the third number: ";
    cin >> num3; 

    // comapare numbers
     if (num1 > num2 && num1 > num3){
        cout << "The number "<< num1 << " is the largest! "<< endl;
     }
     else if(num2 > num1 && num2 > num3){
       cout << "The number "<< num2 << " is the largest! "<< endl;
     }
    else if (num3 > num1 && num3 > num2){
          cout << "The number "<< num3 << " is the largest! "<< endl;
    }
   else if (num1 == num2 && num1 > num3){
     cout << "The number "<< num1 << " is the largest! "<< endl;
   }
   else if (num2 == num3 && num2 > num1){
     cout << "The number "<< num2 << " is the largest! "<< endl;
   }
    else if (num1 == num3 && num3 > num2){
     cout << "The number "<< num3 << " is the largest! "<< endl;
   }
    else {
     cout << "The number "<< num2 << " is the largest! "<< endl;
   }

    return 0;
}
