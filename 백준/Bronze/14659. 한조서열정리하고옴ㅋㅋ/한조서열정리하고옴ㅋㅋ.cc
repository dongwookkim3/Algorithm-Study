#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=0;i<A.size();i++){
        int s=0;
        for (int j=i+1;j<A.size();j++){
            if (A[i]>A[j]){
                s++;
            }
            else {
                break;
            }
        }
        if (s>m){
            m=s;
        }
    }
    cout << m;
    return 0;
}