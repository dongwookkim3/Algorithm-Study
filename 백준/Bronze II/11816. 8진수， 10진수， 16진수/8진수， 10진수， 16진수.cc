#include <iostream>
#include <string>
#include <cmath>
#define MAX 100000
using namespace std;
int main(){
    string A;
    int m=0;
    cin >> A;
    if (A.find('x')!=string::npos){
        for (int i=2;i<A.length();i++){
            if (A[i]>=97){
                m+=(A[i]-87)*pow(16,A.length()-i-1);
            }
            else {
                m+=(A[i]-48)*pow(16,A.length()-i-1);
            }
        }
        cout << m;
    }
    else if (A.front()=='0'){
        for (int i=1;i<A.length();i++){
            m+=(A[i]-48)*pow(8,A.length()-i-1);
        }
        cout << m;
    }
    else {
        cout << A;
    }
    return 0;
}