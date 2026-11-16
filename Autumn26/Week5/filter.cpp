#include <iostream>
#include <vector>
int main(){
    std::vector <double> in;
    double n;
    while( n!=0 ){
    std::cin >> n;
    if(n!=0){
    in.push_back(n);}
    }
    double f;
    std::cout << "the upper bound is";
    std::cin >> f;
    for(int counter = 0 ; counter < in.size();counter++){
        if(in[counter]<f){
            std::cout << in[counter] << " " ;
        }
    }

}
