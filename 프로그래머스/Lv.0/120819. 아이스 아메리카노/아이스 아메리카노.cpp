#include <vector>
using namespace std;
vector<int> solution(int money){
    vector<int> answer;
    answer.push_back(money/5500);
    answer.push_back(money%5500);
    return answer;
}