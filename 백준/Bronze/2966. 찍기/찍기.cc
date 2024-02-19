#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A="ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCA";
    string B="BABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABC";
    string C="CCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAA";
    int n,a=0,b=0,c=0;
    string s;
    cin >> n >> s;
    for (int i=0;i<s.length();i++){
        if (s[i]==A[i]) a++;
        if (s[i]==B[i]) b++;
        if (s[i]==C[i]) c++;
    }
    cout << max({a,b,c}) << "\n";
    if (a==max({a,b,c})) cout << "Adrian\n";
    if (b==max({a,b,c})) cout << "Bruno\n";
    if (c==max({a,b,c})) cout << "Goran\n";
    return 0;
}