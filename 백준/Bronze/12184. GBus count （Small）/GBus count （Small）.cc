#include <iostream>
#define MAX 500
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int A[MAX+1]={};
        int n,m;
        cin >> n;
        while(n--){
            int a,b;
            cin >> a >> b;
            for (int j=a;j<=b;j++){
                A[j]++;
            }
        }
        cin >> m;
        cout << "Case #" << i << ": ";
        while(m--){
            int a;
            cin >> a;
            cout << A[a] << ' ';
        }
        cout << "\n";
    }
    return 0;
}