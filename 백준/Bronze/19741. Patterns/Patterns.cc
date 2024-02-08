#include <iostream>
#include <vector>
#define MAX 1600
using namespace std;
int main(){
    vector<int> A(MAX+1,1);
    for (int i=2;i<=MAX;i++){
        for (int j=i;j<=MAX;j+=i){
            A[j]++;
        }
    }
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (A[n*(i-1)+j]<=m){
                cout << '*';
            }
            else {
                cout << '.';
            }
        }
        cout << "\n";
    }
    return 0;
}