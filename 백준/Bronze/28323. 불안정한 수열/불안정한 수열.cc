#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<bool> A;
    int n,m=1,index=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a%2);
    }
    for (int i=1;i<A.size();i++){
        if (A[index]!=A[i]){
            m++;
            index=i;
        }
    }
    cout << m;
    return 0;
}