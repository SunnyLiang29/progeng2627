#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file(xxxx.txt)" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    if(!infile.is_open()){
        std::cout << "error in opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> v;
     std::string tmp;
    while(infile>>tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }


    std::ofstream outfile;
    std::string outputfilename;
    std::cout << "enter name of output file(xxxx.txt)" << std::endl;
    std::cin >> outputfilename;
    outfile.open(outputfilename);
    for(int i=0 ; i < v.size(); i++){
    outfile << v[i] ;
}
}

