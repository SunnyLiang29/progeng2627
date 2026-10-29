#include <iostream>
double mymax(double a, double b,double c){
    double max;
    if (a>=b && a>=c){
            max=a;
    }
    else if(b>=a && b>=c){
        max = b;}
    else{ max = c; }

    return max;

}

int main(){
    std::cout << (mymax(-1.5,2.5,3.1897)== 3.1897)<<std::endl;
    std::cout << (mymax(2.75,2.75,2.75)== 2.75)<<std::endl;
    std::cout << (mymax(-1.5,-1.5,-5)==-1.5)<<std::endl;
    double m,n,x;
    std::cin>>m>>n >> x;
    std::cout << mymax(m,n,x) <<std::endl;

}