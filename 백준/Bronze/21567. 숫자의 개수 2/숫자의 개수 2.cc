#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX]={};
    unsigned long long a,b,c;
    cin >> a >> b >> c;
    string B=to_string(a*b*c);
    for (int i=0;i<B.length();i++){
        A[B[i]-48]++;
    }
    for (int i=0;i<MAX;i++){
        cout << A[i] << "\n";
    }
    return 0;
}