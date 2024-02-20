#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int n,s,d,A=0;
        cin >> n >> s >> d;
        while(n--){
            int a,b;
            cin >> a >> b;
            if (s*d>=a){
                A+=b;
            }
        }
        cout << "Data Set " << i << ":\n" << A << "\n\n";
    }
    return 0;
}