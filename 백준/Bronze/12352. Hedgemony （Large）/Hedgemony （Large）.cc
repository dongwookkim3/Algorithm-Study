#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(6);
    for (int j=1;j<=t;j++){
        int n;
        cin >> n;
        vector<double> A(n);
        for (int i=0;i<n;i++){
            cin >> A[i];
        }
        for (int i=1;i<n-1;i++){
            A[i]=min(A[i],(A[i-1]+A[i+1])/2);
        }
        cout << "Case #" << j << ": " << A[n-2] << "\n";
    }
    return 0;
}