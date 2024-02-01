#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A;
    if (A[0]=='0' && A.length()==1){
        cout << 0;
    }
    if (A[0]=='1') B+="1";
    else if (A[0]=='2') B+="10";
    else if (A[0]=='3') B+="11";
    else if (A[0]=='4') B+="100";
    else if (A[0]=='5') B+="101";
    else if (A[0]=='6') B+="110";
    else if (A[0]=='7') B+="111";
    for (int i=1;i<A.length();i++){
        if (A[i]=='0') B+="000";
        else if (A[i]=='1') B+="001";
        else if (A[i]=='2') B+="010";
        else if (A[i]=='3') B+="011";
        else if (A[i]=='4') B+="100";
        else if (A[i]=='5') B+="101";
        else if (A[i]=='6') B+="110";
        else if (A[i]=='7') B+="111";
    }
    cout << B;
    return 0;
}