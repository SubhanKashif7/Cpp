#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 15; i+=2){
        if (i==8){
            i++;
            continue;
        };

        printf("%d\n",i);
    };

    

    
    return 0;
}