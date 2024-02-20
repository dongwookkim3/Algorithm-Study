#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int m,n,a,b,c;
    cin >> m >> n >> a >> b >> c;
    if (m==2) cout << min({a,b,c});
    else {
        int z=0;
        vector<int> A(n,0);
        for (int i=0;i<a;i++){
            A[i]=1;
        }
        sort(A.begin(),A.end());
        for (int i=0;i<b;i++){
            if (A[i]){
                z++;
            }
        }
        cout << max(0,c-(n-z));
    }
    return 0;
}