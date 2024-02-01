#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,a,b,s=0;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    cin >> a >> b;
    for (int i=1;i<=n;i++){
        A[i]-=a;
        if (A[i]>0){
            s+=A[i]/b;
            if (A[i]%b!=0){
                s++;
            }
        }
    }
    cout << s+n;
    return 0;
}