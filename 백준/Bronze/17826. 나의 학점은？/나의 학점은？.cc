#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 50
using namespace std;
int main(){
    vector<int> A(MAX);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end(),greater<int>());
    int m;
    cin >> m;
    int index=find(A.begin(),A.end(),m)-A.begin()+1;
    if (index<=5) cout << "A+";
    else if (index<=15) cout << "A0";
    else if (index<=30) cout << "B+";
    else if (index<=35) cout << "B0";
    else if (index<=45) cout << "C+";
    else if (index<=48) cout << "C0";
    else cout << "F";
    return 0;
}