#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        while(a--){
            A.push_back(i);
        }
    }
    while(m--){
        int a;
        cin >> a;
        cout << A[a%A.size()] << "\n";
    }
    return 0;
}