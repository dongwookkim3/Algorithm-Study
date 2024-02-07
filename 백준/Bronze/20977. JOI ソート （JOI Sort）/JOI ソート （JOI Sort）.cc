#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
     int n,a=0,b=0,c=0;
     string A;
     cin >> n >> A;
     for (int i=0;i<A.length();i++){
         if (A[i]=='J') a++;
         else if (A[i]=='O') b++;
         else c++;
     }
     while(a--) cout << 'J';
     while(b--) cout << 'O';
     while(c--) cout << 'I';
     return 0;
}