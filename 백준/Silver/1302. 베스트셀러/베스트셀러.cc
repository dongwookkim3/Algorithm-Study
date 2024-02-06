#include <iostream>
#include <map>
#define MAX 1000
using namespace std;
int main(){
    map<string,int> A;
    int n,m=0;
    string M;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        if (A.find(a)==A.end()){
            A[a]=1;
        }
        else {
            A[a]++;
        }
        if (A[a]>m){
            m=A[a];
            M=a;
        }
        else if (A[a]==m){
            M=min(M,a);
        }
    }
    cout << M;
    return 0;
}