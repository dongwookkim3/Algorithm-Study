#include <iostream>
using namespace std;
int main(){
    int n,k,p,t=0;
    cin >> n >> k >> p;
    while(n--){
        int s=0;
        for (int i=1;i<=k;i++){
            int c;
            cin >> c;
            if (c==0){
                s++;
            }
        }
        if (s<p){
            t++;
        }
    }
    cout << t;
    return 0;
}
