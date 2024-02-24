#include <iostream>
#include <vector>
#define MAX 10000000
using namespace std;
int main(){
    vector<int> A;
    int B[MAX+1]={};
    int n,m=0,x;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
        B[a]++;
    }
    cin >> x;
    for (int i=0;i<A.size();i++){
        if (x-A[i]>=0){
            m+=B[x-A[i]];
        }
    }
    cout << m/2;
    return 0;
}