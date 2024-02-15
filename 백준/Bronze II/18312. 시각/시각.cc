#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int H1,H2=0,M1=59,M2=0,S1=59,S2=0,k,m=0;
    cin >> H1 >> k;
    if (k==0) m++;
    while(H1!=H2 || M1!=M2 || S1!=S2){
        S2++;
        if (S2==60){
            S2=0;
            M2++;
            if (M2==60){
                M2=0;
                H2++;
            }
        }
        if (H2/10==k || H2%10==k || M2/10==k || M2%10==k || S2/10==k || S2%10==k){
            m++;
        }
    }
    cout << m;
    return 0;
}