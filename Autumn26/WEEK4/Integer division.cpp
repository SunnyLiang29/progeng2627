#include <iostream>
#include <cmath>

void myintegerdivision (int & a, int & b){
    int quo, remainder;
    quo= a/b;
    remainder= a%b;
    a= quo;
    b= remainder;
}

int main(){
    int n1,n2;
    std::cout << "the numerator is ";
    std:: cin >> n1;
    std:: cout << "the denominator is ";
    std:: cin >> n2; 
    myintegerdivision(n1,n2);
     std::cout<< "the interger quo is "<< n1 <<std::endl;
     std::cout<< "the remainder is "<< n2 <<std::endl;
    }