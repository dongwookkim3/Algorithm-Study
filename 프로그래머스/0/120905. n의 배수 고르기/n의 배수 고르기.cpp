#include <vector>
using namespace std;
vector<int> solution(int n, vector<int> numlist){
    for (int i=0;i<numlist.size();){
        if (numlist[i]%n){
            numlist.erase(numlist.begin()+i);
        }
        else {
            i++;
        }
    }
    return numlist;
}