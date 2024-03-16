#include <iostream>

using namespace std;

int main(){
    int stdMarks[5] = {456,677,433,344,222};

    int *pointerToStdMarks;
    pointerToStdMarks = &stdMarks[0];
    int f1 = 4545;
    int f2  = *pointerToStdMarks;
    f2 = f1;

    cout << stdMarks[0];

    
    

    return 0;
}