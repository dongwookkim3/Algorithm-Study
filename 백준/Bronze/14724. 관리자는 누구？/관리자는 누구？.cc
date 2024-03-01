#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 9
using namespace std;
int main(){
    vector<string> A={"PROBRAIN","GROW","ARGOS","ADMIN","ANT","MOTION","SPG","COMON","ALMIGHTY"};
    vector<int> B(MAX);
    int n;
    cin >> n;
    for (int i=0;i<MAX;i++){
        int m=0;
        for (int j=0;j<n;j++){
            int a;
            cin >> a;
            if (a>m){
                m=a;
            }
        }
        B[i]=m;
    }
    cout << A[max_element(B.begin(),B.end())-B.begin()];
    return 0;
}