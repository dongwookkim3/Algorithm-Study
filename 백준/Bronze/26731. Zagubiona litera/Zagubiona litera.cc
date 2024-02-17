#include <iostream>
#define MAX 26
using namespace std;
int main(){
    bool A[MAX]={};
    string a;
    cin >> a;
    for (int i=0;i<a.length();i++){
        A[a[i]-65]=true;
    }
    for (int i=0;i<MAX;i++){
        if (!A[i]){
            cout << char(i+65);
            break;
        }
    }
    return 0;
}