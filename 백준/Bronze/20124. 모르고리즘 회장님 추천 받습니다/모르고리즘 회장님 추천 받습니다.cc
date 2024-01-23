#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
struct STUDENT{
    string name;
    int score;
};
bool compare(STUDENT A,STUDENT B){
    if (A.score==B.score) return A.name<B.name;
    return A.score>B.score;
}
int main(){
    STUDENT Student[MAX+1]={};
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> Student[i].name >> Student[i].score;
    }
    sort(Student+1,Student+n+1,compare);
    cout << Student[1].name;
    return 0;
}