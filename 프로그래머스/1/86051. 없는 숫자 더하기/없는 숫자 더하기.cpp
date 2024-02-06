#include <vector>
using namespace std;
int solution(vector<int> numbers){
    int m=45;
    for (int i=0;i<numbers.size();i++){
        m-=numbers[i];
    }
    return m;
}