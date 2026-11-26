#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
void print_reversed_vector(const std::vector<int> & vector){
    for(int i = vector.size()-1; i >= 0; i--){
            std::cout << vector[i] << std::endl;
        }
    }

int main(){
    std::ifstream infile; 
    infile.open("number.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }
    print_reversed_vector(v);
    infile.close(); 
    
    // TODO: print the content of v in reversed order

}