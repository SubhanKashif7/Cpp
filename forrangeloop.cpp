#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string marks[5] = {"10","20","30","40","50"};
    for (string i : marks)
    {
        cout << i << endl;
    }
    
    return 0;
}