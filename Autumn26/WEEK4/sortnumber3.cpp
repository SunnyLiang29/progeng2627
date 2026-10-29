#include<iostream>
void myswap(double& a,double& b){
    double c;
    c=a;
    a=b;
    b=c;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if(s1<=s2 && s2<=s3){
        s1=s1;
        s2=s2;
        s3=s3;}
    else if(s1<=s2 && s2>=s3){
        myswap(s2,s3);
    }
    else if(s2<=s1 && s1<=s3){
        myswap(s1,s2);
    }
    else if(s2<=s1 && s3<=s1){
        myswap(s1,s2);
        myswap(s1,s3);
    }
    else if(s3<=s2 && s2<=s1){
        myswap(s1,s3);
    }
    else if(s3<=s1 &&  s1<=s2){
        myswap(s1,s3);
        myswap(s1,s2);
    }
}

int main(){
    double n1, n2,n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << "<" << n2 <<"<"<< n3 << std::endl;
}