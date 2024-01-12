#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer;
    for (int i=1000;i>=1;i/=10){
        if (age/i){
            answer+=(char)(age/i+97);
            age%=i;
        }
        else if (!answer.empty()){
            answer+='a';
        }
    }
    return answer;
}