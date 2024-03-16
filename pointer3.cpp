#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double percentage = 99.34;
    double *percentage_pointer = &percentage;
    double &anotherPercentage = percentage;
    anotherPercentage = 4.55;
    cout << percentage;
}