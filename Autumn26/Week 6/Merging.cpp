#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

void compare_vector(const std::vector<int> & v, int a,std::vector<int> & vout){
    for(int i=0 ; i< v.size(); i++){
        if(a>=v[i]){
           vout.push_back(i);
        }
    }
}
void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    compare_vector(v2,v1[i],vout,a);
    for(int m=vout(0) ; m< vout(vout.size()-1) ; m=vout()){
    
    }

}


int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}