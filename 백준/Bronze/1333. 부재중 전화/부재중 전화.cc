#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    bool A[MAX+1]={};
    int a,b,c;
    cin >> a >> b >> c;
    for (int i=0;i<a*(b+5);i+=b+5){
        for (int j=0;j<b;j++){
            A[i+j]=true;
        }
    }
    for (int i=c;;i+=c){
        if (!A[i]){
            cout << i;
            break;
        }
    }
    return 0;
}