#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a,b;
    string A;
    cin >> n >> a >> b >> A;
    reverse(A.begin()+a-1,A.begin()+b);
    cout << A;
    return 0;
}