#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string> A;
    int n;
    cin >> n;
    while(n--){
        string a,b;
        cin >> a >> b;
        if (b=="enter"){
            A.insert(a);
        }
        else if (A.find(a)!=A.end()){
            A.erase(a);
        }
    }
    while(A.size()){
        cout << *A.rbegin() << "\n";
        A.erase(*A.rbegin());
    }
    return 0;
}