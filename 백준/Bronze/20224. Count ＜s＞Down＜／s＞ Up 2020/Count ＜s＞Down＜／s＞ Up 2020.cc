#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        vector<int> A;
        int m=0;
        while(n--){
            int a;
            cin >> a;
            A.push_back(a);
        }
        for (int i=0;i<A.size()-3;i++){
            if (A[i]==2 && A[i+1]==0 && A[i+2]==2 && A[i+3]==0){
                m++;
            }
        }
        cout << m << "\n";
    }
    return 0;
}