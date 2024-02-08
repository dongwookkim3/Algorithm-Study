#include <vector>
using namespace std;
int solution(vector<int> a, vector<int> b){
    for (int i=0;i<a.size();i++){
        a[i]*=b[i];
        a[i]+=a[i-1];
    }
    return a[a.size()-1];
}