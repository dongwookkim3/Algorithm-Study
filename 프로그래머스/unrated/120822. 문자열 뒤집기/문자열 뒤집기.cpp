#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    int n=my_string.length()-1;
    char answer[1001];
    for (int i=n;i>=0;i--){
        answer[n-i] = my_string[i];
    }
    return answer;
}