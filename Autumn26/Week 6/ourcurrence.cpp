#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int searching(const std::vector<std::string> & v, std::string a){
    int sum=0;
    for(int i=0; i< v.size();i++){
        if(v[i]==a){
            sum = sum +1;
        }
        else {sum = sum;};
    }
    return sum;
}



int main(){
    std::ifstream infile;
    std::vector <std::string> text;
    std::vector <std::string> word;
    std::vector <int> store;
    infile.open("text.txt");
    std::string tmp;
    while(infile >> tmp){
        text.push_back(tmp);
    }
    infile.close();
    infile.open("word.txt");
    std::string tmp2;
    while(infile >> tmp){
        word.push_back(tmp);
    }
    infile.close();
    for(int i=0;i<word.size();i++){
       store.push_back( searching(text,word[i]));
    }

    std::ofstream outfile;
    outfile.open("orcurrence.txt");
    for(int i=0 ; i < word.size();i++){
    outfile << word[i] << " " <<store[i]<<std::endl;}

}