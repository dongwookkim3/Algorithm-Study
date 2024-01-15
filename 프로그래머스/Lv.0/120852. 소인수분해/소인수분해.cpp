#include <vector>
using namespace std;
vector<int> solution(int n){
    vector<int> a;
    for (int i=2;i<=n;i++){
        if (n%i==0){
            a.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    return a;
}