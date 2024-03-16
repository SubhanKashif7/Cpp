#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter Your Age : ";
    cin >> age;

    int *agepointer;
    agepointer = &age;

    int getAge = *agepointer;

    cout << getAge;

    return 0;
}