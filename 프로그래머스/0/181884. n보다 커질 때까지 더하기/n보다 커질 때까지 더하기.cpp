#include <vector>
using namespace std;
int solution(vector<int> numbers, int n){
    if (numbers[0]>n){
        return numbers[0];
    }
    for (int i=1;i<numbers.size();i++){
        numbers[i]+=numbers[i-1];
        if (numbers[i]>n){
            return numbers[i];
        }
    }
}