#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n;
    std::cout << " the number of terms is";
    std::cin >> n;
    std::cout << " the numbers are";
    for(int i=0;i <n ; i++){
        int a; // the specific numbers need to be added
        std::cin >> a;
        v.push_back(a);}

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}