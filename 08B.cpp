//Write a program that takes a string input from the user and prints the reversed string.
// I solved this problem in "Two pointer technique"
#include<iostream>
#include<string>
using namespace std;
int main(){
    string user_input;
    cout<<"Enter your string: ";
    getline(cin, user_input);
    string reverse_string;
    for(int i = user_input.length()-1; i>= 0; --i){
        reverse_string += user_input[i];
    }
    cout<<" The original string : " << user_input<< endl;
    cout<<" The reversed string : " << reverse_string<< endl;
return 0;
}
