// Iterative character classification solving technique
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isVowel(char c){
    tolower(c);
return (c== 'a' || c == 'i' || c == 'o'|| c == 'u' || c == 'e');
}
int main(){
    string user_input;
    int vowel = 0, consonant = 0;
    cout<<"Enter a string : ";
    getline(cin, user_input);
    for(char c : user_input){
        if(isalpha(c)){
            if(isVowel(c)){
                vowel++;
            }else{
            consonant++;
            }
        }

    }
    cout<< "The number of vowel : "<<vowel<<endl;
    cout<<"The number of consonant : "<<consonant<<endl;

return 0;
}
