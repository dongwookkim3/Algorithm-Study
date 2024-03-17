#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define MAX 5000000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,a=0,b=0;
    vector<int> A,B;
    vector<bool> PRIME(MAX,false);
    map<int,bool> M;
    PRIME[0]=PRIME[1]=true;
    for (long long i=2;i*i<=MAX;i++){
        if (!PRIME[i]){
            for (long long j=i*i;j<=MAX;j+=i){
                PRIME[j]=true;
            }
        }
    }
    cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        if (PRIME[x]){
            if (B.size()==3){
                b+=B.front();
            }
            else {
                b+=1000;
            }
        }
        else if (M[x]){
            a-=1000;
        }
        else {
            A.push_back(x);
            if (A.size()==4){
                sort(A.begin(),A.end());
                A.erase(A.begin());
            }
            M[x]=true;
        }
        if (PRIME[y]){
            if (A.size()==3){
                a+=A.front();
            }
            else {
                a+=1000;
            }
        }
        else if (M[y]){
            b-=1000;
        }
        else {
            B.push_back(y);
            if (B.size()==4){
                sort(B.begin(),B.end());
                B.erase(B.begin());
            }
            M[y]=true;
        }
    }
    if (a>b) cout << "소수의 신 갓대웅";
    else if (a<b) cout << "소수 마스터 갓규성";
    else cout << "우열을 가릴 수 없음";
    return 0;
}