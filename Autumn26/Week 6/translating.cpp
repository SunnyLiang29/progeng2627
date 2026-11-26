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
} // the state of the element found or not (same or not )


int main(){
    std::ifstream infile;
    std::string filenamein;
    std::string filenameout;
    std::cout << "the text you want to translate:";
    std::cin >> filenamein;
    std::cout << "the data base you want to use:";
    std::cin >> filenameout; 
    std::vector <std::string> ad ;
    std::vector <std::string> storeage;
    infile.open(filenamein);
    std::string tmp;
    while(infile >> tmp){
        ad.push_back(tmp);
    }
    infile.close();
    std::vector <std::string> data;
    infile.open(filenameout);
    while(infile >> tmp){
        data.push_back(tmp);
    }
    infile.close();  
    std::vector <int> position;//position with word has real 
    std::vector <int> position2;// position without real 
    for (int i = 0 ; i < ad.size() ; i++){
        search_vector(ad[i],data);
        if(search_vector(ad[i],data)==-1){
            position2.push_back(i);
        }
        else{storeage.push_back(data[i]); 
                position.push_back(i);}

/*        bool found= false;
        for(int j=0; j < data.size() && found == false; j++){
            if(ad[i]==data[j]){
                storeage.push_back(data[j+1]); 
                position.push_back(i);
                found = true;
            }
        }
        if(found == false)
             {position2.push_back(i);}*/
    }
    std::ofstream outfile;
    outfile.open("translating.txt");
    int i=0;
    int j=0;
    //int number=0;
    //int number2=0;
    while(i<position.size()&& j <position2.size()){
        if(position[i]<position2[j]){
            outfile << storeage[i]<< " "; 
            i++;
        }
        else if(position[i]>position2[j]){
            outfile << ad[position2[j]]<< " ";
            j++;
        }
        //number=i;
        //number2=j;(i&j for while is not the thing inside )
    }
    if(number <position.size()){
        for(int i=number;i<position.size();i++){
            outfile<< storeage[i]<<" ";
        }
    }
    if (number2 <position2.size()){
        for(int i=number2;i<position2.size();i++){
            outfile<< ad[position2[i]]<<" ";
            }
    }
    outfile.close();

}



