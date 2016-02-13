#include <iostream>
#include <string.h>
using namespace std;
 
class romanType{
public:
    romanType(char&);  // ** make constructor
    int convert();
    void print();
    void get();
 
private:
    int M, D, C, L, X, V, I;
    char romanNumeral;
};
romanType::romanType(char &ch){
    M = 1000;
    D = 500;
    C = 100;
    L = 50;
    X = 10;
    V = 5;
    I = 1;
    cout << ch << endl;
    romanNumeral=ch;     // ** set up romanNumeral
}
int romanType::convert(){
    if (romanNumeral == 'M'){
        return 1000;                   // ** return value
    }else if(romanNumeral == 'D'){
        return  500;

    }else if(romanNumeral == 'C'){

        return  100;

    }else if(romanNumeral == 'L'){

        return  50;

    }else if(romanNumeral == 'X'){

        return  10;

    }else if(romanNumeral == 'V'){

        return  5;

    }else if(romanNumeral == 'I'){

        return  1;

    }

    return 0;   // ** error -

}

void romanType::print(){

    cout << romanNumeral << endl;

}

void romanType::get(){

}

int main(){

    char romanNumeral;

    cout << "Welcome to the Roman numeral to decimal converter!\nPlease enter a number in Roman numerals to be converted: ";

    cin >> romanNumeral;

    romanType roman=romanType(romanNumeral);  //  ** set up value

    cout << roman.convert() << endl;;

 

    system("pause");

return 0;

}
