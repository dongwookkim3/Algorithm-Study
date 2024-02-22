#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        A[i]=A[i-1]+i+1;
    }
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        cout << a << ' ' << A[b] << "\n";
    }
    return 0;
}