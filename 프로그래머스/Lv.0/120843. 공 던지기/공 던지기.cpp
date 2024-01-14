#include <vector>
using namespace std;
int solution(vector<int> people,int k){
    return people[((k-1)*2)%people.size()];
}