#include <iostream>
#include <math.h>
using namespace std;

void sum(int digit1 , int digit2, int &pointTo){
    auto result = digit1+digit2;
    pointTo = result;
};
void min(int digit1 , int digit2, int &pointTo){
    auto result = digit1-digit2;
    pointTo = result;
};
void mul(int digit1 , int digit2, int &pointTo){
    auto result = digit1*digit2;
    pointTo = result;
};
void div(int digit1 , int digit2, int &pointTo){
    auto result = digit1/digit2;
    pointTo = result;
};
void mod(int digit1 , int digit2, int &pointTo){
    auto result = digit1%digit2;
    pointTo = result;
};

void powerOf(int digit1 , int powerto , int &pointTo){
    auto result = pow((double) digit1 , (double) powerto);
    pointTo = result;
}

int main(int argc, char const *argv[])
{   
    int result;
    int dg1;
    int dg2;
    string operation;
    cout << "Enter First digit:  ";
    cin >> dg1;

    cout << "Enter First digit:   ";
    cin >> dg2;

    cout << "Enter the operational sign like (\'+,-,/,** etc...\')";
    cin >> operation;

   if (operation=="+"){sum(dg1,dg2,result);}
    else if (operation=="-"){
        min(dg1,dg2,result);
        cout << result << endl;
   }else if (operation=="+"){
        sum(dg1,dg2,result);
        cout << result << endl;
   }else if (operation=="/"){
        div(dg1,dg2,result);
        cout << result << endl;
   }else if (operation=="%"){
        mod(dg1,dg2,result);
        cout << result << endl;
   }else if (operation=="**"){
        powerOf(dg1,dg2,result);
        cout << result << endl;
   }else if (operation=="*"){
        mul(dg1,dg2,result);
        cout << result << endl;
   }else {
    cout << "NOT FOUND";
   };



    return 0;
}
