#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000
using namespace std;
int main(){
    vector<int> A={1};
    for (int i=2;A.back()<=MAX;i++){
        A.push_back(A.back()+i);
    }
    int n;
    cin >> n;
    while(n--){
        int m;
        bool f=false;
        cin >> m;
        for (int i=0;i<A.size();i++){
            for (int j=i;j<A.size() && A[i]+A[j]<=m;j++){
                for (int k=j;k<A.size() && A[i]+A[j]+A[k]<=m;k++){
                    if (A[i]+A[j]+A[k]==m){
                        f=true;
                    }
                }
            }
        }
        cout << f << "\n";
    }
    return 0;
}