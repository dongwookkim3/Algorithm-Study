#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        A.push_back(i);
    }
    while(m--){
        int a,b,c;
        cin >> a >> b >> c;
        for (int i=1;i<=c-a;i++){
            A.insert(A.begin()+b,A[a-1]);
            A.erase(A.begin()+a-1);
        }
    }
    for (int i=0;i<n;i++){
        cout << A[i] << ' ';
    }
    return 0;
}