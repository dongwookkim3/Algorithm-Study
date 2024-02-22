#include <iostream>
using namespace std;
int main(){
    int n,m;
    while(cin >> n >> m && (n || m)){
        int s=0;
        for (int i=1;i<=n;i++){
            int a;
            cin >> a;
            if (a>=m/n){
                s+=m/n;
            }
            else {
                s+=a;
            }
        }
        cout << s << "\n";
    }
    return 0;
}