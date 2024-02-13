#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> A,B;
        int n,m,index=0,s=0;
        cin >> n >> m;
        for (int i=0;i<n;i++){
            int a;
            cin >> a;
            A.push_back(a);
        }
        for (int i=0;i<m;i++){
            int a;
            cin >> a;
            B.push_back(a);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        while(A.size()){
            if (A.front()>B.front()){
                s+=A.size();
                B.erase(B.begin());
                if (!B.size()){
                    break;
                }
            }
            else {
                A.erase(A.begin());
            }
        }
        cout << s << "\n";
    }
    return 0;
}