#include <iostream>

using namespace std;

void print(auto output){
    cout << output << endl;
};


int main(int argc, char const *argv[])
{
   int aArr[4];
   aArr[0] = 9;

   *aArr = 29;

   int *ap = aArr;
   ap += 1;

   

    return 0;
}
