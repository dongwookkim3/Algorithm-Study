#include <vector>
using namespace std;
int solution(vector<int> xy){
    if (xy[0]>0){
        if (xy[1]>0){
            return 1;
        }
        else {
            return 4;
        }
    }
    else {
        if (xy[1]>0){
            return 2;
        }
        else {
            return 3;
        }
    }
}