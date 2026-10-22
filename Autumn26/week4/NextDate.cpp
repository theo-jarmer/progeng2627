#include <iostream>

bool leap_year(int year){
    bool ly=false;

    if( (year % 4) == 0){ 

        if( (year % 100) == 0){ 

            if((year % 400)==0){
                ly = true;
            }
            else{
                ly= false;
            }

        }
        else{ 
            ly=true;

        }
    }

    return ly;
    // we *do not print* anything in the function
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    
    d2 = d1+1;
    m2 = m1;
    y2 = y1;
    if (m1 == 1 or m1 == 3 or m1 == 5 or m1 == 7 or m1 == 8 or m1 == 10){
        if(d1 == 31){
            d2 = 1;
            m2 = m1 +1;
        }
    }
    else if (m1 == 12 && d1 == 31){
            y2 = y1 +1;
            m2 = 1;
            d2 = 1;
    }
    else if (m1 == 4 or m1 == 6 or m1 == 9 or m1== 11){
        if(d1 == 30){
            d2 = 1;
            m2 = m1 +1;
        }
    }
    else if (m1 == 2)
    {
        if ((d1 == 28 && !leap_year(y1))or(d1 == 29 && leap_year(y1))){
            d2 = 1;
            m2 = m1 +1;
        }
    }
    
    
}

int main(){
    int a,b,c,d,e,f;
    std::cout << "Enter current date" << std::endl;
    std:: cin >> a >> b >> c;
    next_date(a,b,c,d,e,f);
    std::cout << "Next date:" << d << "/" << e << " " << f;
}