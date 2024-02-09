#include <string>
using namespace std;
int binary(int n){
    int m=0;
    if (n/2){
        m=binary(n/2);
        if (n%2){
            m++;
        }
    }
    else if (n%2){
        m++;
    }
    return m;
}
int solution(int n){
    int m=binary(n);
    for (int i=n+1;;i++){
        if (binary(i)==m){
            return i;
        }
    }
}