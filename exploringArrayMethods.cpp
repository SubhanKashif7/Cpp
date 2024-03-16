#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    // string std[3] = {"Subhan","Ali"};
    // std[2].assign("Hello");
    
    // cout << std[2];


    string names[5] = {};
    names[0].assign("Subhan");
    names[1].assign("Hello World!");
    names[2].assign("Ali");
    names[3].assign("Amin");
    names[4].assign("Irtaza");
    

    for (const string& string : names){
        cout << string << endl;
    }


    // string students[] = {
    //     "Subhan Amin",
    //     "Irtaza",
    //     "Subhan Kashif",
    //     "Ali hassan"
    // };

    // string newStd[4] = {};

    // copy(begin(students), end(students),begin(newStd));

    // for (const string& student : newStd){
    //     cout << student << endl;
    // };

    // copy



    return 0;
}
