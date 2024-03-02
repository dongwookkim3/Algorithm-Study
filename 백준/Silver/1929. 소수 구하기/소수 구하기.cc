#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    bool Prime[MAX+1]={};
    Prime[0]=Prime[1]=true;
    for (long long i=2;i*i<=MAX;i++){
        if (Prime[i]==0){
            for (long long j=i*i;j<=MAX;j+=i){
                Prime[j]=true;
            }
        }
    }
    int A,B;
    cin >> A >> B;
    for (int i=A;i<=B;i++){
        if (!Prime[i]){
            cout << i << "\n";
        }
    }
    return 0;
}