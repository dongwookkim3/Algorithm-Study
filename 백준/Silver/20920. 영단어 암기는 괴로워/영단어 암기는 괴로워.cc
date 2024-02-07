#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
map<string,int> A;
bool compare(string &a,string &b){
    if (A[a]!=A[b]) return (A[a]>A[b]);
    if (a.length()!=b.length()) return (a.length()>b.length());
    return (a<b);
}
int main(){
    vector<string> B;
    int n,m;
    cin >> n >> m;
    while(n--){
        string a;
        cin >> a;
        if (a.length()>=m){
            if (A[a]){
                A[a]++;
            }
            else {
                A[a]=1;
                B.push_back(a);
            }
        }
    }
    sort(B.begin(),B.end(),compare);
    for (int i=0;i<B.size();i++){
        cout << B[i] << "\n";
    }
    return 0;
}