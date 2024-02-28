#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        vector<int> A;
        int n,m;
        bool f=false;
        cin >> n >> m;
        while(m--){
            int a;
            cin >> a;
            A.push_back(a);
        }
        for (int j=0;j<A.size();j++){
            for (int k=j+1;k<A.size();k++){
                if (A[j]+A[k]==n){
                    cout << "Case #" << i << ": " << j+1 << ' ' << k+1 << "\n";
                    f=true;
                    break;
                }
            }
            if (f){
                break;
            }
        }
    }
    return 0;
}