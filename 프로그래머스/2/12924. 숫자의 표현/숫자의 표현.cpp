#include <vector>
#include <algorithm>
#define MAX 10000
using namespace std;
int solution(int n){
    int m=0;
    vector<int> A(MAX+1);
    for (int i=1;i<=MAX;i++){
        A[i]=A[i-1]+i;
    }
    for (int i=1;i<=n;i++){
        if (binary_search(A.begin(),A.end(),A[i]-n)){
            m++;
        }
    }
    return m;
}