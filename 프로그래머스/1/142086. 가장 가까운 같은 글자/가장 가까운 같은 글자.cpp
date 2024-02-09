#include <string>
#include <vector>
using namespace std;
vector<int> solution(string s){
    vector<int> A={-1};
    for (int i=1;i<s.length();i++){
        for (int j=i-1;j>=0;j--){
            if (s[i]==s[j]){
                A.push_back(i-j);
                break;
            }
        }
        if (A.size()!=i+1){
            A.push_back(-1);
        }
    }
    return A;
}