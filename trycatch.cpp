#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int call_api = 1;
    throw call_api;
    try{

    }catch(int x){
        cout << "Integer exception Err";
    };
    
    return 0;
}