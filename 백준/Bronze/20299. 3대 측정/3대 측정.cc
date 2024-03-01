#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> A;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c>=m && min({a,b,c})>=k){
            A.push_back(a);
            A.push_back(b);
            A.push_back(c);
        }
    }
    cout << A.size()/3 << "\n";
    for (int i=0;i<A.size();i++){
        cout << A[i] << ' ';
    }
    return 0;
}