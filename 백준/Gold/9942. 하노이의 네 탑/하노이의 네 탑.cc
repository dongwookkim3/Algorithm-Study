#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    long long A[MAX+1]={1,0,2},c=2,r=1;
    for (int i=3;i<=MAX;i++){
        if (c==r){
            A[i]=A[i-1]*2;
            c++;
            r=0;
        }
        else {
            A[i]=A[i-1];
        }
        r++;
    }
    for (int i=1;i<=MAX;i++){
        A[i]+=A[i-1];
    }
    int t=0,n;
    while(cin >> n && ++t){
        cout << "Case " << t << ": " << A[n] << "\n";
    }
    return 0;
}