#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int,int> A,pair<int,int> B){
    if (A.first==B.first) return A.second<B.second;
    return A.first<B.first;
}
int main(){
    vector<pair<int,int>> A;
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        A.push_back(make_pair(a,b));
    }
    sort(A.begin(),A.end(),compare);
    for (int i=1;i<A.size();i++){
        if (A[i].first<=A[i-1].first+A[i-1].second){
            A[i].first=A[i-1].first+A[i-1].second;
        }
    }
    cout << A.back().first+A.back().second;
    return 0;
}