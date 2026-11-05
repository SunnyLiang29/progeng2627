#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year%400 ==0){
        ly=true;
    }
    else if (year%4==0 && year%100!=0){
        ly=true;
    }
    else {ly = false;}

    return ly;
}


void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if(d1 < 28){
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else if((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) ){// month of 30 days
        if(d1 == 30){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
        else{
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }
    else if((m1 == 1 || m1 == 3 || m1 == 5|| m1 == 7 || m1 == 8 || m1 == 10)){ // month of 31 days except december
        if(d1 == 31){
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
        else{
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }
    else if(m1 == 12){ // december
        if(d1 == 31){
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
        }
        else{
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }

    }
    else if(m1 == 2){ // february
        if(leap_year(y1)){
            if(d1 == 29){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else{
            if(d1 == 28){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }

        }
    }
    else{ // error!
        std::cout << "something went wrong!" << std::endl;
    }
}
/*
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    leap_year(y1);

    d2 = d1 +1;
    y2 = y1;
    m2 = m1;
    if ((m1 == 1 || m1 == 3 || m1 == 5|| m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) && d2 > 31){
            d2 = 1;
            m2 = m1 +1;
            if (m2 >12){
            m2 = 1;
            y2 = y1 +1;
             }
        }
    else if ((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)&& d2> 30){
            d2 = 1;
            m2 = m1 +1;
    }
    else if (m1 == 2 && y1 == true && d2 >29){
            d2 = 1;
            m2= m1 +1 ;

        }
    else if (m1 == 2 && y1 == false && d2 >28){
        d2= 1;
        m2 = m1 +1;}

}
*/

void test_next_date(int d1, int m1, int y1, int d2x, int m2x, int y2x){
    int d2, m2, y2;
    next_date(d1, m1, y1, d2, m2, y2);
    if((d2 == d2x) && (m2 == m2x) && (y2 == y2x)){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "failed" << std::endl;
    }
}

int main(){    
    /*
    int d1, m1, y1,d2 ,m2, y2;
    std:: cout << "today(dd/mm/yyyy) is ";
    std:: cin >> d1 >> m1 >> y1;
    next_date(d1,m1,y1,d2,m2 ,y2);
     std:: cout << "tommorow is "<< d2 << " " << m2 << " " << y2 << std:: endl;
    */
   test_next_date(1, 12, 2000, 2, 12, 2000);
   test_next_date(31, 12, 2000, 1, 1, 2001);
   test_next_date(28, 2, 2004, 29, 2, 2004);
   test_next_date(28, 2, 1900, 1, 3, 1900);
   test_next_date(28, 2, 2000, 29, 2, 2000);
   test_next_date(28, 2, 1975, 1, 3, 1975);
   test_next_date(29, 2, 2000, 1, 3, 2000);
}