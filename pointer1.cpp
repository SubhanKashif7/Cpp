#include <iostream>
using namespace std;

int main(){
    int age = 11;
    int nameof;
    int *myp;
    myp = &age;
    nameof = *myp;
    cout << nameof;
}