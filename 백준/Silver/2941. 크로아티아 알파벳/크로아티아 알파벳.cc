#include <iostream>
#define MAX 8
using namespace std;
int main(){
    int m=0;
    string A;
    string B[MAX]={"c=","c-","dz=","d-","lj","nj","s=","z="};
    cin >> A;
    for (int i=0;i<A.length();i++){
        for (int j=0;j<MAX;j++){
            if (A.substr(i,B[j].length())==B[j]){
                m++;
                i+=B[j].length()-1;
                break;
            }
            else if (j==MAX-1){
                m++;
            }
        }
    }
    cout << m;
    return 0;
}