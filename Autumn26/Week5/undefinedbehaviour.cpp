#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v[0] << std::endl;
    // this will print 10

    std::cout << v[1] << std::endl;
    // this will print 20

    v[0] = 15;

    std::cout << v[0] << std::endl;
    // this will print 15

    std::cout << v[4] << std::endl; 
    // undefined behaviour

    v[2] = 30; 
    // undefined behaviour

    std::cout << v[2] << std::endl;
    // undefined behaviour

}