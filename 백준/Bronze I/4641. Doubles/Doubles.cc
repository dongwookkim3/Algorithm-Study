#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=-1){
        vector<int> A;
        int m=0;
        A.push_back(n);
        while(cin >> n && n!=0){
            A.push_back(n);
        }
        for (int i=0;i<A.size();i++){
            if (find(A.begin(),A.end(),A[i]*2)!=A.end()){
                m++;
            }
        }
        cout << m << "\n";
    }
}