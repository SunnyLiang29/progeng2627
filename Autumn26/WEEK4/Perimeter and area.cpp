#include <iostream>
#include <cmath>

void myareaandperimeter (double & a, double & b){
    double area,perimeter;
    area= a*b;
    perimeter= 2*a + 2*b;
    a= area;
    b= perimeter;
}

int main(){
    double n1,n2;
    std::cout << "the length of the rectangle is ";
    std:: cin >> n1;
    std:: cout << "the width of the rectangle is ";
    std:: cin >> n2; 
    myareaandperimeter(n1,n2);
     std::cout<< "the area is "<< n1 <<std::endl;
     std::cout<< "the perimeter is "<< n2 <<std::endl;
    }