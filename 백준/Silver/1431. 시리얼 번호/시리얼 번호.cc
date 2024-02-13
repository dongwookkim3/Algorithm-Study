#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string &A,string &B){
    if (A.length()!=B.length()) return A.length()<B.length();
    int a=0,b=0;
    for (int i=0;i<A.length();i++){
        if (A[i]>=49 && A[i]<=57){
            a+=A[i]-48;
        }
    }
    for (int i=0;i<B.length();i++){
        if (B[i]>=49 && B[i]<=57){
            b+=B[i]-48;
        }
    }
    if (a!=b) return a<b;
    else return A<B;
}
int main(){
    vector<string> A;
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        string a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end(),compare);
    for (int i=0;i<n;i++){
        cout << A[i] << "\n";
    }
    return 0;
}