#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0; i<vin.size(); i++){
        if(s==vin[i]){
            return i;
        }
    }
    return -1;
} 

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i=0 ; i<vin1.size() ; i++){
        vout.push_back(vin1[i]);
    }
   /*  std::vector<int> tmp;
    for(int i=0 ; i<vin2.size() ; i++){
        for(int j=0 ; j< vin1.size() ; j++){
            if(vin2[i]!= vin1[j] ){ 
                tmp.push_back(i);
           }
    } */ 
    //problem: repeative printing reason:a lot of not same element between vin1 and vin2 
    // I want only return 1 thing when find they are not same
    // 1. function early return / return -- only one return
    // 2.   ?
    // std::remove 
    // erase()

    for(int i=0 ; i<vin2.size() ; i++){
        if(search_vector(vin2[i],vin1)==-1){
            vout.push_back(vin2[i]);}
    }


}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0 ; i<vin1.size() ; i++){
        for(int j=0 ; j< vin2.size() ; j++){
            if(vin1[i]== vin2[j]){ 
            vout.push_back(vin2[j]);}
    }
    /*for(int i=0 ; i<vin1.size() ; i++){
        search_vector(vin1[i],vin2);
        vout.push_back(vin1[i]);*/
    }

}

int main(){
    std::string filename1;
    std::string fileanme2;
    std::cout << "enter names of files" << std::endl;
    std::cin >> filename1;
    std::cin >> fileanme2;
    std::ifstream infile;
    infile.open(filename1);
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::string tmp;
    while(infile>> tmp){
        v1.push_back(tmp);
    };
    infile.close();
    infile.open(fileanme2);
    while(infile>> tmp){
        v2.push_back(tmp);
    };
    infile.close();
    std::ofstream outfile;
    outfile.open("union.txt");
    std::vector<std::string>vout;
    union_vector(v1,v2,vout);
    for(int i=0; i < vout.size(); i++){
        outfile<< vout[i] << std::endl;
    }
    outfile.close();
    outfile.open("interaction.txt");
    vout.clear();
    intersection_vector(v1,v2,vout);
    for(int i=0; i < vout.size(); i++){
        outfile<< vout[i];
    }
    outfile.close();

}
