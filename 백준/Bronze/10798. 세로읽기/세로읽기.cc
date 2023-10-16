#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, j;
    char S[6][16]={{'\0',},};
    for(i=0; i<5; i++){
        for(j=0; j<16; j++){
            cin.get(S[i][j]);
            if(S[i][j] == '\n'){
                break;
            }
        }
    }   
    for(i=0; i<15; i++){
        for(j=0; j<5; j++){
            if(S[j][i] != '\n' && S[j][i] != '\0'){
                cout << S[j][i];
            }
        }
    }
    return 0;
}