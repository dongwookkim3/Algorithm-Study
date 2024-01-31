#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> A,B;
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (a==0){
            A.push_back(i);
        }
        else {
            for (int j=1;j<=a;j++){
                B.push_back(A.back());
                A.pop_back();
            }
            A.push_back(i);
            for (int j=1;j<=a;j++){
                A.push_back(B.back());
                B.pop_back();
            }
        }
    }
    while(n--){
        cout << A.front() << ' ';
        A.pop_front();
    }
    return 0;
}