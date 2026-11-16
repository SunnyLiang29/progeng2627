#include <iostream>
#include <vector>
int main (){
    std::vector<int> m;
    int n;
    std::cout << "please enter n:";
    std::cin >> n;
    for (int j=0 ; j<n ; j++){
        std::cout << "please enter the number:";
        int a;
        std::cin >> a; 
        m.push_back(a);
    }
    std::cout << "please enter s:";
    int s;
    std::cin >> s;
      int occurrence=0;
    for (int b=0 ; b < m.size();b++){
        if (m[b]==s){
            occurrence=occurrence+1;

        }
    }
    std::cout << "there are";
    if (occurrence==0){
      std::cout <<  "no occurrence of" << s << std:: endl;
    }
    else{   std::cout << occurrence << "occurrence of" << s << std:: endl;}

}
