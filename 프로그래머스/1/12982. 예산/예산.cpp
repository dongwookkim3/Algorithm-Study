#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<int> d, int budget){
    sort(d.begin(),d.end());
    for (int i=0;i<d.size();i++){
        if (budget-d[i]>=0){
            budget-=d[i];
        }
        else {
            return i;
        }
    }
}