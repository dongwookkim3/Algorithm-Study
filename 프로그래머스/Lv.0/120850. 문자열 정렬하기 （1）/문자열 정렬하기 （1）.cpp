#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(string S){
    vector<int> A;
    for (int i=0;i<S.length();i++){
        if (S[i]>=48 && S[i]<=57){
            A.push_back(S[i]-48);
        }
    }
    sort(A.begin(),A.end());
    return A;
}