#include <iostream>
#include <cstdio>
using namespace std;
int f(int n){
    if (n==0) return 1;
    else return f(n-1)*n;
}
int main(){
    double m=2.5;
    cout << "n e\n- -----------\n";
    cout << "0 1\n1 2\n2 2.5\n";
    for (int i=3;i<10;i++){
        m+=(double)1/f(i);
        printf("%d %.9lf\n",i,m);
    }
    return 0;
}