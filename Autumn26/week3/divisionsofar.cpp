#include<iostream>
int main (){
int n=0;
int a,b;
std::cout << "the integer is ";
std::cin >> a ;
std:: cout << "the divisor is ";
std::cin >> b;
while (a>b){
    a=a-b;
    n=n+1;
}
std::cout << "the integer division is the integer = the diviso3r*"<< n;
std::cout << "+" << a << std::endl;
}