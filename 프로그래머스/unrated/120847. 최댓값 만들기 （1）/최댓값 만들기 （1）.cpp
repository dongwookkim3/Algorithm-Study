#include <string>
#include <vector>
using namespace std;

int solution(vector<int> numbers){
    int m1=0,m2=0;
    for (int i=0;i<numbers.size();i++){
        if (numbers[i]>m1){
            m2=m1;
            m1=numbers[i];
        }
        else if (numbers[i]>m2){
            m2=numbers[i];
        }
    }
    return m1*m2;
}