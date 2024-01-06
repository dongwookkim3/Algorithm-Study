#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer=0;
    for (int i=0;i<babbling.size();i++){
        for (int j=0;j<babbling[i].length();j++){
            if (babbling[i][j] == 'a' && babbling[i].substr(j, 3) == "aya") {
                j += 2;
            }
            else if (babbling[i][j] == 'w' && babbling[i].substr(j, 3) == "woo") {
                j += 2;
            }
            else if (babbling[i][j] == 'y' && babbling[i].substr(j, 2) == "ye") {
                j += 1;
            }
            else if (babbling[i][j] == 'm' && babbling[i].substr(j, 2) == "ma") {
                j += 1;
            }
            else {
                break;
            }
            if (j==babbling[i].length()-1){
                answer++;
            }
        }
    }
    return answer;
}