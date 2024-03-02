#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    while(k--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a==1){
            A[b-1]=c;
        }
        else if (a==2){
            for (int i=b-1;i<c;i++){
                A[i]=!A[i];
            }
        }
        else if (a==3){
            for (int i=b-1;i<c;i++){
                A[i]=0;
            }
        }
        else {
            for (int i=b-1;i<c;i++){
                A[i]=1;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout << A[i] << ' ';
    }
    return 0;
}