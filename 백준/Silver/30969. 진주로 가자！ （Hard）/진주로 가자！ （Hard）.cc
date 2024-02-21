#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A[MAX+1]={};
    int n,m=0,s=MAX;
    cin >> n;
    while(n--){
        string a;
        long long r;
        cin >> a >> r;
        if (r>1000){
            m++;
            continue;
        }
        else if (a=="jinju" && s>r){
            s=r;
        }
        A[r]++;
    }
    for (int i=2;i<=MAX;i++){
        A[i]+=A[i-1];
    }
    cout << s << "\n" << A[MAX]-A[s]+m;
    return 0;
}