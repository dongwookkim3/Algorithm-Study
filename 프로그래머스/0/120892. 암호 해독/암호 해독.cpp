#include <string>
using namespace std;
string solution(string cipher, int code){
    string A;
    for (int i=0;i<cipher.length();i++){
        if ((i+1)%code==0){
            A+=cipher[i];
        }
    }
    return A;
}