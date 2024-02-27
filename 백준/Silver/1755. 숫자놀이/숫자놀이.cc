#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10
using namespace std;
int main(){
    vector<string> A;
    string D[MAX]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n,m;
    cin >> n >> m;
    for (int i=n;i<=m;i++){
        string B=to_string(i),C;
        for (int j=0;j<B.length();j++){
            C+=D[B[j]-48];
        }
        A.push_back(C);
    }
    sort(A.begin(),A.end());
    for (int i=1;i<=A.size();i++){
        for (int j=0;j<A[i-1].length();j++){
            for (int k=0;k<MAX;k++){
                if (A[i-1].substr(j,D[k].length())==D[k]){
                    cout << k;
                    break;
                }
            }
        }
        cout << ' ';
        if (i%10==0){
            cout << "\n";
        }
    }
    return 0;
}