#include <iostream>
#include <map>
using namespace std;
int main(){
    map<long long,int> A;
    long long n,m=0,mindex;
    cin >> n;
    while(n--){
        long long a;
        cin >> a;
        if (A[a]){
            A[a]++;
        }
        else {
            A[a]=1;
        }
        if (A[a]>m){
            m=A[a];
            mindex=a;
        }
        else if (A[a]==m && mindex>a){
            mindex=a;
        }
    }
    cout << mindex;
    return 0;
}