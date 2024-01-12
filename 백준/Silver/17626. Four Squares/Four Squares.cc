#include <iostream>
#define MAX 223
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        A[i]=i*i;
    }
    int n;
    cin >> n;
    for (int i=1;A[i]<=n;i++){
        if (A[i]==n){
            cout << 1;
            return 0;
        }
    }
    for (int i=1;A[i]<=n;i++){
        for (int j=i;A[i]+A[j]<=n;j++){
            if (A[i]+A[j]==n){
                cout << 2;
                return 0;
            }
        }
    }
    for (int i=1;A[i]<=n;i++){
        for (int j=i;A[i]+A[j]<=n;j++){
            for (int k=j;A[i]+A[j]+A[k]<=n;k++){
                if (A[i]+A[j]+A[k]==n){
                    cout << 3;
                    return 0;
                }
            }
        }
    }
    for (int i=1;A[i]<=n;i++){
        for (int j=i;A[i]+A[j]<=n;j++){
            for (int k=j;A[i]+A[j]+A[k]<=n;k++){
                for (int l=k;A[i]+A[j]+A[k]+A[l]<=n;l++) {
                    if (A[i]+A[j]+A[k]+A[l]==n){
                        cout << 4;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}