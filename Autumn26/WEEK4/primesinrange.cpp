#include<iostream>
bool findprimes (int a){
   bool prime;
   for(int n=2; n<a ; n++){
        if (a%n == 0){
            prime = false ; 
         return prime;   }
    }
    prime = true;

    return prime; 

}

int main(){
    int a,b;
    std::cout << "the lower bond is ";
    std::cin >> a;
    std::cout << "the higher bond is";
    std::cin >> b;
    std::cout << "the prime numbers in this range are";
    for (int i =a+1;i < b;i++ ){
        if (findprimes(i)){
            std::cout<< i << " ";
        }
    }
}