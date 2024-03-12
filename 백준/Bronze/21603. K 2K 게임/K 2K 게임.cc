#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        if (i%10!=m%10 && i%10!=(m*2)%10){
            A.push_back(i);
        }
    }
    cout << A.size() << "\n";
    for (int i=0;i<A.size();i++){
        cout << A[i] << ' ';
    }
    return 0;
}