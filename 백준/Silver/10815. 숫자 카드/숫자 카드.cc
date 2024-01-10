#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 500000
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    vector<int> A(MAX+1,0);
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    sort(A.begin()+1,A.begin()+n+1);
    cin >> m;
    while(m--){
        int a;
        cin >> a;
        cout << binary_search(A.begin()+1,A.begin()+n+1,a) << ' ';
    }
    return 0;
}
