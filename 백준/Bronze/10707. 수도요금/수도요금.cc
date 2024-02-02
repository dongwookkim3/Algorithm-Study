#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B,C,D,n;
    cin >> A >> B >> C >> D >> n;
    cout << min(n*A,B+max(0,n-C)*D);
    return 0;
}