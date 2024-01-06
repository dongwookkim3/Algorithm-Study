#include <string>
#include <vector>
using namespace std;
long long GCD(long long A,long long B){
    if (B==0) return A;
    else return GCD(B,A%B);
}
long long LCM(long long A,long long B){
    return A*B/GCD(A,B);
}
vector<int> solution(int n,int m) {
    vector<int> answer;
    answer.push_back(GCD(n,m));
    answer.push_back(LCM(n,m));
    return answer;
}