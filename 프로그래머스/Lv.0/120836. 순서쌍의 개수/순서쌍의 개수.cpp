#include <cmath>
using namespace std;
int solution(int n){
    int m=0;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0) m+=2;
        if (i*i==n) m--;
    }
    return m;
}