#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,string> A;
    int m=0;
    string a;
    cin >> a;
    for (int i=0;i<a.length();i++){
        for (int j=1;i+j<=a.length();j++){
            if (A.find(a.substr(i,j))==A.end()){
                m++;
                A[a.substr(i,j)]=a.substr(i,j);
            }
        }
    }
    cout << m;
    return 0;
}