#include <iostream>
#define MAX 9
using namespace std;
int main(){
    int A[MAX]={100,100,200,200,300,300,400,400,500};
    int m=0;
    for (int i=0;i<MAX;i++){
        int a;
        cin >> a;
        if (a>A[i]){
            m=3000;
        }
        m+=a;
    }
    if (m>=3000) cout << "hacker";
    else if (m>=100) cout << "draw";
    else cout << "none";
    return 0;
}