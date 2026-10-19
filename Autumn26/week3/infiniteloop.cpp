#include <iostream>
int main (){
// we want to compute x^n with x being any number and n for now being a positive integer
    int n;
    double x;
    std::cout << "the power is equal to" << std::endl;
    std::cin >> n;
    std::cout << "the base number is equal to" << std::endl; 
    std::cin >> x;
    double y=1.0;
    int count = 0 ;
    while (count < n){
        y=y+x;
        std::cout <<"the result of x^n is equal to" << y << std::endl;
    }
    std::cout <<"the result of x^n is equal to" << y << std::endl;
}