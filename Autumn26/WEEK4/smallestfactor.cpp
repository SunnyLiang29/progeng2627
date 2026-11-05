#include<iostream>

int found_factor (int n){
    int smallest_factor;
    int cf;
    for (int cf=2; cf<n ; cf ++ ){
        if (n%cf == 0){
        smallest_factor= cf;
        return smallest_factor;}
        else { smallest_factor = 0;
        return smallest_factor;}
    }
}

int main(){
    int n;
    std:: cin >> n;
   if ( found_factor(n) !=0){
    std::cout << "the smallest factor is " << found_factor(n)<< std :: endl;
}
    else {std:: cout << "n is the prime number";}}