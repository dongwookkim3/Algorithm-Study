#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    while(getline(cin,A)){
        int a=0,b=0,c=0,d=0;
        for (int i=0;i<A.length();i++){
            if (A[i]>90) a++;
            else if (A[i]>=65) b++;
            else if (A[i]>=48) c++;
            else d++;
        }
        cout << a << ' ' << b << ' ' << c << ' ' << d << "\n";
    }
    return 0;
}