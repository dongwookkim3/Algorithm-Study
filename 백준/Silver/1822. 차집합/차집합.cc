#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> A;
    int n,m;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        A.insert(a);
    }
    while(m--){
        int a;
        cin >> a;
        if (A.find(a)!=A.end()){
            A.erase(a);
        }
    }
    cout << A.size() << "\n";
    while(A.size()){
        cout << *A.begin() << ' ';
        A.erase(A.begin());
    }
    return 0;
}