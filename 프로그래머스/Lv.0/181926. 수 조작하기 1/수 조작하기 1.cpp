#include <string>
#include <vector>
using namespace std;
int solution(int n,string C){
    for (int i=0;i<C.length();i++){
        if (C[i]=='w') n++;
        else if (C[i]=='s') n--;
        else if (C[i]=='d') n+=10;
        else if (C[i]=='a') n-=10;
    }
    return n;
}