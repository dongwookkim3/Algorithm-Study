#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency);
    sort(emergency.begin(),emergency.end(),greater<int>());
    for (int i=0;i<answer.size();i++){
        for (int j=0;j<emergency.size();j++){
            if (answer[i]==emergency[j]){
                answer[i]=j+1;
                break;
            }
        }
    }
    return answer;
}