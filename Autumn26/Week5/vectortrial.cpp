#include <iostream>
#include <vector>
int main(){
    std::vector<int> sequence;
    sequence.push_back(1);
    sequence.push_back(2);
    sequence.push_back(3);
    int out;
    out = sequence[0]*(sequence[1]+sequence[2]);
    std::cout << out << std::endl;
}