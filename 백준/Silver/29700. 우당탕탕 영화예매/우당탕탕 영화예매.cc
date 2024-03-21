#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,k,s=0;
    cin >> n >> m >> k;
    while(n--){
        vector<int> A;
        string S;
        cin >> S;
        for (int i=0;i<S.length();i++){
            if (S[i]=='0'){
                if (A.empty() || A.back()==0){
                    A.push_back(1);
                }
                else {
                    A[A.size()-1]++;
                }
            }
            else {
                A.push_back(0);
            }
        }
        for (int i=0;i<A.size();i++){
            if (A[i]>=k){
                s+=A[i]-k+1;
            }
        }
    }
    cout << s;
    return 0;
}