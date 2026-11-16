#include <iostream>
#include <vector>
int main (){
    std::vector<int> m;
    std:: vector<int> indices;
    int n; //the number of number is the sequence
    std::cout << "please enter n:";
    std::cin >> n;
    for (int j=0 ; j<n ; j++){
        std::cout << "please enter the number:";
        int a; // the actual number in vector (whether or not can use more simple method to finish?)
        std::cin >> a; 
        m.push_back(a);
    }
    std::cout << "please enter s:";
    int s;// the number need to be judge 
    std::cin >> s;
      int occurrence=0;// the number of occurrence
    for (int b=0 ; b < m.size();b++){// can I still use j in for ?
        if (m[b]==s){
            occurrence=occurrence+1;
            indices.push_back(b);
        }
    }
    std::cout << "there are";
    if (occurrence==0){
      std::cout <<  "no occurrence of" << s << std:: endl;
    }
    else{   
        std::cout << occurrence << "occurrence of" << s << std:: endl; 
        std::cout << "the indices are";

        for(auto& index : indices){
            std::cout << index << std::endl;
        }
        
        for (int j = 0; j < indices.size(); j++){
            std::cout << indices[j] << std::endl;
        }
    }

}