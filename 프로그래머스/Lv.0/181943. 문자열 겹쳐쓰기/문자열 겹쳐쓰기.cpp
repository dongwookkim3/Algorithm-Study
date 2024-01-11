#include <string>
using namespace std;
string solution(string my_string, string overwrite_string,int s){
    string answer;
    answer.append(my_string,0,s);
    answer.append(overwrite_string);
    answer.append(my_string,s+overwrite_string.length(),my_string.length());
    return answer;
}