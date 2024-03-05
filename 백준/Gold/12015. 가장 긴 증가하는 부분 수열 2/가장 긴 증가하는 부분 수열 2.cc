#include <iostream>
#include <vector>
using namespace std;
int main(){
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