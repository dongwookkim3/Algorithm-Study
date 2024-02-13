#include <iostream>
#include <vector>
#include <cmath>
#define MAX 9
using namespace std;
int main(){
    vector<bool> A(MAX+1,false);
    int a,b,c=0;
    cin >> a >> b;
    for (int i=MAX;i>=0;i--){
        if (a/(int)pow(2,i)){
            A[i]=!A[i];
            a%=(int)pow(2,i);
        }
        if (b/(int)pow(2,i)){
            A[i]=!A[i];
            b%=(int)pow(2,i);
        }
        if (A[i]){
            c+=pow(2,i);
        }
    }
    cout << c;
    return 0;
}