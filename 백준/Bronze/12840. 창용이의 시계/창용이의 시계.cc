#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long h,m,s,k;
    cin >> h >> m >> s >> k;
    s+=h*3600+m*60;
    while(k--){
        int a;
        cin >> a;
        if (a==1){
            long long b;
            cin >> b;
            s+=b;
            s%=86400;
        }
        else if (a==2){
            long long b;
            cin >> b;
            s-=b;
            s+=864000000;
            s%=86400;
        }
        else {
            cout << s/3600 << ' ' << (s%3600)/60 << ' ' << s%60 << "\n";
        }
    }
    return 0;
}