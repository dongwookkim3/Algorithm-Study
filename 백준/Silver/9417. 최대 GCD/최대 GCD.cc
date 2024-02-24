#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
long long GCD(long long A,long long B){
    if (B==0) return A;
    else return GCD(B,A%B);
}
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        vector<long long> A;
        string a,b;
        getline(cin,a);
        istringstream iss(a);
        while(getline(iss,b,' ')){
            A.push_back(stoll(b));
        }
        long long L=GCD(A[0],A[1]);
        for (int i=0;i<A.size();i++){
            for (int j=i+1;j<A.size();j++){
                if (GCD(A[i],A[j])>L){
                    L=GCD(A[i],A[j]);
                }
            }
        }
        cout << L << "\n";
    }
    return 0;
}