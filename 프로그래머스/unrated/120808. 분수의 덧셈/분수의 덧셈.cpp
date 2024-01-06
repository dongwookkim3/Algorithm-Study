#include <string>
#include <vector>
using namespace std;

vector<int> solution(int numer1,int denom1,int numer2,int denom2){
    vector<int> answer;
    numer1*=denom2;
    numer2*=denom1;
    denom1*=denom2;
    numer1+=numer2;
    for (int i=2;i<=1000;i++){
        while(numer1%i==0 && denom1%i==0){
            numer1/=i;
            denom1/=i;
        }
    }
    answer.push_back(numer1);
    answer.push_back(denom1);
    return answer;
}