#include <vector>
using namespace std;
vector<int> solution(int n, int k){
    vector<int> A;
    for (int i=k;i<=n;i+=k){
        A.push_back(i);
    }
    return A;
}