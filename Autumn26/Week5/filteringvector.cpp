#include <iostream>
#include<vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();
    for(int j=0;j<vin.size();j++){
        if(vin[j]<t){
            vout.push_back(vin[j]);
        }
    }
    /*int main() {

    for (int n = 3; n < 7; n++) {

        std::vector<int> v;（自动clear)

        from_1_to_n(n, v);

        // 打印 v
    }
}*/
}
void print_vector(const std::vector<double> & vector){
    for(int i = 0; i < vector.size(); i++){
            std::cout << vector[i] << std::endl;
        }
    }
int main(){
    std::vector<double>v{1,2,3,4,2.2,6.6,56,99,100,34005};
    std::vector<double>s;
    double t =3;
    filter_v(v,t,s);
    print_vector(s);
    t= 57;
    filter_v(v,t,s);
    print_vector(s);
}