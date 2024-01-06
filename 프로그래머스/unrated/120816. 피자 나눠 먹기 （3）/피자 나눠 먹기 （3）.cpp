#include <string>
#include <vector>
using namespace std;

int solution(int slice,int n){
    if (n%slice==0) return n/slice;
    else return n/slice+1;
}