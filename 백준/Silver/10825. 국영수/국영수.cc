#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
struct student{
    string name;
    int k;
    int e;
    int m;
};
bool compare(student &a,student &b){
    if (a.k==b.k && a.e==b.e && a.m==b.m) return a.name<b.name;
    else if (a.k==b.k && a.e==b.e) return a.m>b.m;
    else if (a.k==b.k) return a.e<b.e;
    return a.k>b.k;
}
int main(){
    student S[MAX]={};
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> S[i].name >> S[i].k >> S[i].e >> S[i].m;
    }
    sort(S,S+n,compare);
    for (int i=0;i<n;i++){
        cout << S[i].name << "\n";
    }
    return 0;
}