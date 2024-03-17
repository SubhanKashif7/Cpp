#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char username[] = "Subhan";
    for (char *sp = username; *sp ; sp++ ){
        cout << "Character is " << *sp << endl;
    };
    return 0;
}