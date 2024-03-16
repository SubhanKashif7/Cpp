#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int integer_arr[3] = {1,2,3};
    // cout << integer_arr;  // modern

    int another_Arr[3];
    another_Arr[0] = 10;
    another_Arr[1] = 20;

    // *another_Arr = 40;

    int *ap = another_Arr;
    ap++;
    ap++;
    *ap = 45;
    cout << another_Arr[2];
    





    return 0;
}
