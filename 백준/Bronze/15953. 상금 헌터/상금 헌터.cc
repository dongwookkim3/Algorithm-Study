#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int A[MAX+1]={0,500,300,300,200,200,200,50,50,50,50,30,30,30,30,30,10,10,10,10,10,10};
    int B[MAX+1]={0,512,256,256,128,128,128,128,64,64,64,64,64,64,64,64,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32};
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        cout << (A[a]+B[b])*10000 << "\n";
    }
    return 0;
}