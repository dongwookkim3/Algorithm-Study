#include <iostream>
#define MAX 50
using namespace std;
int main(){
    int A[MAX]={};
    int n,m,l,index=0;
    cin >> n >> m >> l;
    for (int i=0;;i++){
        A[index]++;
        if (A[index]>=m){
            cout << i;
            break;
        }
        if (A[index]%2){
            index+=l;
            index%=n;
        }
        else {
            index-=l-n;
            index%=n;
        }
    }
    return 0;
}