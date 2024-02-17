#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A,B;
        cin >> A >> B;
        if (A.length()<B.length()){
            string t=A;
            A=B;
            B=t;
        }
        reverse(A.begin(),A.end());
        reverse(B.begin(),B.end());
        for (int i=0;i<B.length();i++){
            if (B[i]-48){
                A[i]++;
            }
        }
        for (int i=0;i<A.length();i++){
            if (A[i]>=50){
                A[i]-=2;
                if (i==A.length()-1){
                    A.push_back('1');
                }
                else {
                    A[i+1]++;
                }
            }
        }
        while(A.back()=='0'){
            A.pop_back();
        }
        reverse(A.begin(),A.end());
        if (A.empty()) cout << "0\n";
        else cout << A << "\n";
    }
    return 0;
}