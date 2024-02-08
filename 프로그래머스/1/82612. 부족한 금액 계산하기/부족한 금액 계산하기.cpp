#include <vector>
using namespace std;
long long solution(int price, int money, int count){
    vector<long long> A={1};
    for (int i=2;i<=count;i++){
        A.push_back(A.back()+i);
    }
    if (A.back()*price-money<0) return 0;
    return A.back()*price-money;
}