#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        vector<long long> A;
        int n;
        cin >> n;
        n*=2;
        cout << "Case #" << i << ": ";
        while(n--){
            long long a;
            cin >> a;
            if (A.empty()){
                cout << a << ' ';
                A.push_back(a);
                continue;
            }
            for (int j=0;j<A.size();j++){
                if (a==A[j]*4/3){
                    A.erase(A.begin()+j);
                    break;
                }
                if (j==A.size()-1){
                    cout << a << ' ';
                    A.push_back(a);
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}