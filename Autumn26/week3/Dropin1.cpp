#include <iostream>
#include <cmath>

int main (){
    double a,b,c,s;
    std::cout << "enter three sides length" ;
    std::cin >> a >> b >> c ;
    s=(a+b+c)/2;
    if (a+b>c && a+c>b && b+c>a){
    std::cout << "valid triangle" << std::endl;
        if (a==b||b==c||a==c) {
        std::cout << "isosceles" << std::endl;
        std::cout << a+b+c << std::endl;
        std::cout <<sqrt(s*(s-a)*(s-b)*(s-c));
         }
        else if (a==b && b==c) {
            std::cout << "equilateral" << std::endl;
            std::cout << a+b+c << std::endl;
            std::cout << sqrt(s*(s-a)*(s-b)*(s-c));
        }
        else {
            std::cout << "scalene" << std::endl;
            std::cout << a+b+c << std::endl;
            std::cout << sqrt(s*(s-a)*(s-b)*(s-c));
        }
    }
    else {
        std::cout << "not valid" << std::endl;
    }
    

}