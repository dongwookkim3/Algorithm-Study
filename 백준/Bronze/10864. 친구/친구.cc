#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(n);
    while(m--){
        int a,b;
        cin >> a >> b;
        A[a-1]++;
        A[b-1]++;
    }
    for (int i=0;i<A.size();i++){
        cout << A[i] << "\n";
    }
    return 0;
}