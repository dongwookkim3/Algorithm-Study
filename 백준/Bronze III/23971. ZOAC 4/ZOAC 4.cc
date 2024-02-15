#include <iostream>
using namespace std;
int main(){
    int h,w,n,m;
    cin >> h >> w >> n >> m;
    cout << (h/(n+1)+bool(h%(n+1)))*(w/(m+1)+bool(w%(m+1)));
    return 0;
}