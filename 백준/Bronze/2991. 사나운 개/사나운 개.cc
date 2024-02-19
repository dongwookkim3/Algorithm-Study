#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    int A[MAX]={};
    int a,b,c,d,n;
    cin >> a >> b >> c >> d;
    for (int i=1;i<1000;i+=a+b){
        for (int j=0;j<a;j++){
            A[i+j]++;
        }
    }
    for (int i=1;i<1000;i+=c+d){
        for (int j=0;j<c;j++){
            A[i+j]++;
        }
    }
    for (int i=1;i<=3;i++){
        cin >> n;
        cout << A[n] << "\n";
    }
    return 0;
}