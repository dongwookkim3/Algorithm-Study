#include <iostream>
using namespace std;
int main(){
    int n,m=0,index=1;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='L'){
            index--;
        }
        else {
            index++;
        }
        if (index==0) index=1;
        else if (index==4) index=3;
        if (index==3){
            m++;
        }
    }
    cout << m;
    return 0;
}