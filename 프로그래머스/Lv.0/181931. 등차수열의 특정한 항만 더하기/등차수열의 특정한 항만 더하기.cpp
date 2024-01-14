#include <vector>
using namespace std;
int solution(int a,int d,vector<bool> B){
    int m=0;
    for (int i=0;i<B.size();i++){
        if (B[i]){
            m+=a+i*d;
        }
    }
    return m;
}