#include <iostream>
using namespace std;
int main(){
    int i=0;
    string A;
    while(getline(cin,A) && ++i);
    cout << i;
    return 0;
}