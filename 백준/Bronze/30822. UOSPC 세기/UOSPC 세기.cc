#include <iostream>
#include <algorithm>
#define MAX 26
using namespace std;
int main(){
    int A[MAX]={};
    int n;
    string a;
    cin >> n >> a;
    for (int i=0;i<n;i++){
        A[a[i]-97]++;
    }
    cout << min({A[20],A[14],A[18],A[15],A[2]});
    return 0;
}