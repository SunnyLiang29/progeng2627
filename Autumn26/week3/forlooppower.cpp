#include <iostream>
int main (){
// we want to compute x^n with x being any number and n for now being a positive integer
    int n;
    double x;
    std::cout << "the power(n) is equal to" << std::endl;
    std::cin >> n;
    std::cout << "the base number(x) is equal to" << std::endl; 
    std::cin >> x;
    int count=0;
    for(double y=1 ; count<n ;count++; ){
        y = y*x
    }
    std::cout <<"the result of x^n is equal to" << y << std::endl;
}