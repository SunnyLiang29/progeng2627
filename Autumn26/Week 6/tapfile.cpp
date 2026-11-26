#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    //infile.open("number.txt");
    std::string text_name;
    std:: cout << "the text nume(xxx.txt) is";
    std::cin >> text_name;
    infile.open(text_name);

    if(infile.is_open()){ 
        int tmp;
        double sum=0;
        while(infile >> tmp){
            sum = sum +tmp;
            std::cout << tmp << std::endl;
        }

        infile.close(); 
        std::cout << sum ;

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}