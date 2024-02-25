#include <iostream>
#include <vector>
#include <numeric>
#define MAX 26
using namespace std;
int main(){
    string A;
    while(getline(cin,A) && A!="#"){
        vector<int> B(MAX,0);
        for (int i=0;i<A.length();i++){
            if (A[i]>=97 && A[i]<=122){
                B[A[i]-97]=1;
            }
            else if (A[i]>=65 && A[i]<=90){
                B[A[i]-65]=1;
            }
        }
        cout << accumulate(B.begin(),B.end(),0) << "\n";
        B.clear();
    }
    return 0;
}