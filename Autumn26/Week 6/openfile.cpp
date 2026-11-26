#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    //infile.open("number.txt");
    infile.open("imput.txt");

    if(infile.is_open()){ 
        int tmp;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)
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