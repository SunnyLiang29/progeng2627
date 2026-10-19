#include<iostream>
int main (){
    double a;
    double sum,average = 0;
    int n=1;
    std::cout<< "enter a number :" << std:: endl;
    std::cin >> a;
    while(a!=0){
        sum = sum + a;
        average = sum/n;
        std :: cout << "the average so far is " << average << std ::endl;
        std::cout << "enter a number :" << std:: endl;
        std :: cin >> a;
        n=n+1;
    }

}