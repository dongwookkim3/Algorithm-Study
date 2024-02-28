#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m=0;
    while(cin >> n && n!=0 && ++m){
        getchar();
        vector<string> A(n);
        for (int i=0;i<n;i++){
            getline(cin,A[i]);
        }
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        cout << "Week " << m << ' ' << A.size() << "\n";
    }
    return 0;
}