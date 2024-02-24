#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<n;i++){
        if (A[i]=='s') a++;
        else b++;
    }
    while(a!=b){
        if (A.front()=='s') a--;
        else b--;
        A.erase(A.begin());
    }
    cout << A;
    return 0;
}