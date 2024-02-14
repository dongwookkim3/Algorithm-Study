#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> P;
    int A,B,C;
    int n;
    cin >> A >> B >> C >> n;
    while(n--){
        int m=0;
        for (int i=1;i<=3;i++){
            int a,b,c;
            cin >> a >> b >> c;
            m+=A*a+B*b+C*c;
        }
        P.push_back(m);
    }
    sort(P.begin(),P.end());
    cout << P.back();
    return 0;
}