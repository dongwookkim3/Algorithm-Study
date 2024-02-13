#include <iostream>
#include <vector>
#define MAX 100000
using namespace std;
int main(){
    vector<int> A(MAX+1);
    int n,m;
    cin >> n >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        A[a]++;
        A[b]++;
    }
    for (int i=1;i<=n;i++){
        cout << A[i] << "\n";
    }
    return 0;
}