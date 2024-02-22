#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int t,m=0;
    cin >> t;
    if (t%2){
        cout << "still running";
        return 0;
    }
    else {
        while(t--){
            int a;
            cin >> a;
            if (!A.empty()){
                m+=a-A.back();
                A.pop_back();
            }
            else {
                A.push_back(a);
            }
        }
    }
    cout << m;
    return 0;
}