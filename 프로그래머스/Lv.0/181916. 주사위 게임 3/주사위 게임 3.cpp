#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int solution(int a,int b,int c,int d){
    int A[4]={a,b,c,d};
    sort(A,A+4);
    if (A[0]==A[3]) return 1111*A[0];
    else if (A[0]==A[2]) return (10*A[0]+A[3])*(10*A[0]+A[3]);
    else if (A[1]==A[3]) return (10*A[1]+A[0])*(10*A[1]+A[0]);
    else if (A[0]==A[1] && A[2]==A[3]) return (A[0]+A[2])*abs(A[0]-A[2]);
    else if (A[0]==A[1]) return A[2]*A[3];
    else if (A[1]==A[2]) return A[0]*A[3];
    else if (A[2]==A[3]) return A[0]*A[1];
    else return A[0];
}