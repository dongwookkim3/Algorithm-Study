#include <vector>
using namespace std;
int solution(vector<int> list){
    int s=0,m=1;
    for (int i=0;i<list.size();i++){
        m*=list[i];
        s+=list[i];
    }
    return (m<s*s);
}