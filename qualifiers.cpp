#include <iostream>

using namespace std;


int lifeUp(){
    static int life = 0;
    life++;
    cout << life << endl;
};

int main(int argc, char const *argv[])
{
    // modification Qualifiers
    // const , volatile , mutable

    // life duration qualifiers

    // static , register , extern

    lifeUp();
    lifeUp();
    lifeUp();
    lifeUp();
    lifeUp();
    


    return 0;
}