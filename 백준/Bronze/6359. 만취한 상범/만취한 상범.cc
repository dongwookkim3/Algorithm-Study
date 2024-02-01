#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m=0;
        bool A[MAX+1]={};
        cin >> n;
        for (int i=1;i<=n;i++){
            for (int j=i;j<=n;j+=i){
                A[j]=!A[j];
            }
        }
        for (int i=1;i<=n;i++){
            if (A[i]){
                m++;
            }
        }
        cout << m << "\n";
    }
    return 0;
}