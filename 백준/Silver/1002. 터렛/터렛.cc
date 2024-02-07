#include <iostream>
#include <cmath>
using namespace std;
int main(){
     int n;
     cin >> n;
     while(n--){
         long long x1,x2,y1,y2,r1,r2;
         cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
         int R1=pow(x1-x2,2)+pow(y1-y2,2);
         int R2=pow(r1+r2,2);
         int R3=pow(r1-r2,2);
         if (x1==x2 && y1==y2 && r1==r2) cout << "-1\n";
         else if (R1==R2 || R1==R3) cout << "1\n";
         else if (R1>R2 || R1<R3) cout << "0\n";
         else cout << "2\n";
     }
     return 0;
}