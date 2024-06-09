//Write a program that takes a string input from the user and prints the reversed string.
// Here I will use reverse iterators method to solve the problem
#include<iostream>
#include<string>
using namespace std;
int main(){
string user_string;
cout<<"Enter a string: ";
getline(cin, user_string);
string reversed_string(user_string.rbegin(), user_string.rend());
cout<<"Your original string was -> "<<user_string<<endl;
cout<<"Your reversed string is -> " << reversed_string<<endl;

return 0;
}
