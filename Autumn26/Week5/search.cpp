#include <iostream>
#include <vector>
int search_vector(const std::vector <int> &v, int n){
    for(int i=0 ; i< v.size(); i++){
        if (v[i]==n){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector <int> v;
    int n;
    std::cout << " the number of terms is";
    std::cin >> n;
    std::cout << " the numbers are";
    for(int i=0;i <n ; i++){
        int a; // the specific numbers need to be added
        std::cin >> a;
        v.push_back(a);}
    std :: cout << "the number needed to research is ";
    int b;
    std::cin >> b;
    std::cout << "the searching result is " << search_vector(v,b); 

}