#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    for (int i=1;i<=t;i++){
        int n,m=0;
        cin >> n;
        getchar();
        vector<string> A(n);
        for (int j=0;j<n;j++){
            getline(cin,A[j]);
        }
        for (int j=1;j<A.size();){
            if (A[j]<A[j-1]){
                m++;
                A.erase(A.begin()+j);
            }
            else {
                j++;
            }
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}