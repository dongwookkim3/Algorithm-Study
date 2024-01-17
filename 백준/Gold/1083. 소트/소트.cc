#include <iostream>
#define MAX 50
using namespace std;
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int main(){
    int n,k;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    cin >> k;
    for (int i=1;i<=n && k!=0;i++){
        int m=A[i],mi=i;
        for (int j=i+1;j<=i+k && j<=n;j++){
            if (A[j]>m){
                m=A[j];
                mi=j;
            }
        }
        if (i!=mi){
            for (int j=mi;j>i;j--){
                swap(A[j],A[j-1]);
            }
            k-=mi-i;
        }
    }
    for (int i=1;i<=n;i++){
        cout << A[i] << ' ';
    }
    return 0;
}