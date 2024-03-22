#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> array){
    int index=max_element(array.begin(),array.end())-array.begin();
    return {*max_element(array.begin(),array.end()),index};
}