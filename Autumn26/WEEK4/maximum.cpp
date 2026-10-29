#include <iostream>
double mymax(double a, double b){
    double max;
    if (a>b){
        max=a;
    }
    else{
        max = b;
    }

    /*
    else if (a==b){
        max = 
    }
    else{max=b;}
    */
    return max;

}

int main(){
    double m,n;
    std::cin>>m>>n;
    std::cout << mymax(m,n) <<std::endl;



}