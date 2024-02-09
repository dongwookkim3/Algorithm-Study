#include <string>
using namespace std;
int solution(string my_string, string is_suffix){
    if (my_string.length()<is_suffix.length()) return 0;
    return (my_string.substr(my_string.length()-is_suffix.length(),is_suffix.length())==is_suffix);
}