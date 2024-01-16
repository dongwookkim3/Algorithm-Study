#include <algorithm>
#define MAX 9
using namespace std;
long long solution(long long n){
    string A=to_string(n);
    sort(A.begin(),A.end(),greater<int>());
    return stoll(A);
}