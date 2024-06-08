// A program that asks the user for two numbers and then prints their sum, difference, product, and quotient @author "Salvir Rahman Ratul"
#include<iostream>
int main(){
    double num1, num2;
    std::cout<<"Enter your first number: ";
    std::cin>>num1;
    std::cout<<"Enter your second number: ";
    std::cin>>num2;

    // calculation part
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double qoutient = num1 / num2;
     // Result printing
     std:: cout<<"Sum is "<<sum<<std::endl;
     std::cout<<"Difference is "<<difference<<std::endl;
     std::cout<<"Quotient is "<<qoutient<<std::endl;
     std::cout<<"Product is "<<product<<std::endl;
    return 0;
}