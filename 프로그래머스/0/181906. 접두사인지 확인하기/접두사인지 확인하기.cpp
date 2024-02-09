#include <string>
using namespace std;
int solution(string my_string, string is_prefix){
    while(my_string.size()){
        if (my_string==is_prefix){
            return 1;
        }
        my_string.pop_back();
    }
    return 0;
}