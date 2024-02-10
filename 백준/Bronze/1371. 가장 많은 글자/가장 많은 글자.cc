#include <iostream>
#define MAX 26
using namespace std;
int main(){
    int A[MAX]={},m=0;
    string a;
    while(getline(cin,a)){
        for (int i=0;i<a.length();i++){
            if (a[i]==' ') continue;
            A[a[i]-97]++;
            if (A[a[i]-97]>m){
                m=A[a[i]-97];
            }
        }
    }
    for (int i=0;i<MAX;i++){
        if (A[i]==m){
            cout << char(i+97);
        }
    }
    return 0;
}