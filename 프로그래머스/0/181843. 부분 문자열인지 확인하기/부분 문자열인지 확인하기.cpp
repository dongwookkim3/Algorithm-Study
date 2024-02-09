#include <string>
using namespace std;
int solution(string my_string, string target){
    return my_string.find(target)!=string::npos;
}