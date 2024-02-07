#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    map<string,int> A;
    int n,m=0;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        sort(a.begin(),a.end());
        if (!A[a]){
            m++;
            A[a]=1;
        }
    }
    cout << m;
    return 0;
}