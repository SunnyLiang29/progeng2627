#include <iostream>

double mypow(double base, int exp){
    double result=1;
    if (exp>0 || exp==0){
        for(int n=0;n<exp; n++){
        result = result * base;}
    }
    else {
         for(int n=0;n<-exp; n++){
        result = result/base;}
    }
    return result;

}

int main(){
double x;
std::cout<< "the base number is ";
std::cin>> x;
int i;
std::cout<< "the exponent is ";
std::cin >> i;
int sum = 0;

for(int a=1;a<i||a==i;a++){
    sum = sum + mypow(x,a);
}
std::cout<< "the sum of power is "<< sum <<std::endl;
}