#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (A.empty() || A.back()<a){
            A.push_back(a);
        }
        else {
            auto index=lower_bound(A.begin(),A.end(),a);
            *index=a;
        }
    }
    cout << A.size();
    return 0;
}