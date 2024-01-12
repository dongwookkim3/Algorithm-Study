#include <vector>
using namespace std;
vector<int> solution(long long n){
    vector<int> A;
    while(n>9){
        A.push_back(n%10);
        n/=10;
    }
    A.push_back(n);
    return A;
}