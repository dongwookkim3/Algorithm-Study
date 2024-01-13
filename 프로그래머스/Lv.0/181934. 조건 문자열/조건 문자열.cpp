#include <string>
using namespace std;
int solution(string ineq,string eq,int n,int m){
    if (ineq==">"){
        if (eq=="="){
            return (n>=m);
        }
        else {
            return (n>m);
        }
    }
    else {
        if (eq=="="){
            return (n<=m);
        }
        else {
            return (n<m);
        }
    }
}