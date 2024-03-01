#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int j=1;j<=t;j++){
        int m=0;
        for (int i=0;i<MAX;i++){
            int a;
            cin >> a;
            if (i%5+1==a){
                m++;
            }
        }
        if (m==MAX){
            cout << j << "\n";
        }
    }
    return 0;
}