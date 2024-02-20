#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,m,k,s=INT_MAX,sindex=0;
    cin >> n >> m >> k;
    for (int i=1;i<=k;i++){
        int a,b;
        cin >> a >> b;
        if (s>abs(a-1)+abs(b-m)+1){
            s=abs(a-1)+abs(b-m)+1;
            sindex=i;
        }
    }
    cout << sindex;
    return 0;
}