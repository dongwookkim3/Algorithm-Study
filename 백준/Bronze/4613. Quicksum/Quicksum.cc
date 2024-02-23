#include <iostream>
using namespace std;
int main(){
    string A;
    while(getline(cin,A) && A!="#"){
        int m=0;
        for (int i=0;i<A.length();i++){
            if (A[i]==' ') continue;
            m+=(i+1)*(A[i]-64);
        }
        cout << m << "\n";
    }
    return 0;
}