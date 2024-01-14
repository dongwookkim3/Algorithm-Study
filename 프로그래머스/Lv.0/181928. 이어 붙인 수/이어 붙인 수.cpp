#include <string>
#include <vector>
using namespace std;
int solution(vector<int> list){
    int even=0,odd=0;
    for (int i=0;i<list.size();i++){
        if (list[i]%2==0){
            even*=10;
            even+=list[i];
        }
        else {
            odd*=10;
            odd+=list[i];
        }
    }
    return even+odd;
}