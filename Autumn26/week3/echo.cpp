#include <iostream>
#include <string>

int main(){
    std::string words;

    std::cin >> words;

    while(words!="stop" && words!="Stop"&& words!="STOP" ){
        std::cout << words << std::endl;
        std::cin >> words;
    }
}
