#include <string>
#include <vector>
using namespace std;
string binary(string s,int n){
    if (n/2){
        s=binary(s,n/2);
        s+=to_string(n%2);
    }
    else {
        s+=to_string(n);
    }
    return s;
}
vector<int> solution(string s){
    int m=0;
    for (int i=1;;i++){
        for (int j=0;j<s.length();){
            if (s[j]=='0'){
                s.erase(s.begin()+j);
                m++;
            }
            else {
                j++;
            }
        }
        if (s=="1"){
            return {i,m-i+1};
        }
        s=binary("0",s.length());
    }
}