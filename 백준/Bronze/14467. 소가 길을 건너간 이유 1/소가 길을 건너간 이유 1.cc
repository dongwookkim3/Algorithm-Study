#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10
using namespace std;
int main(){
    vector<int> A(MAX+1,-1);
    int n,m=0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        if (A[a]==-1){
            A[a]=b;
        }
        else if (A[a]!=b){
            A[a]=b;
            m++;
        }
    }
    cout << m;
    return 0;
}