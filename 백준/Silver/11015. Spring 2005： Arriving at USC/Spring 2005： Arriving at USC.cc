#include <iostream>
#include <vector>
using namespace std;
string f(string A){
    for (int i=0;i<A.length();i++){
        if (A[i]>=97 && A[i]<=122){
            A[i]-=32;
        }
    }
    return A;
}
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        cout << "Data Set " << i << ":\n";
        vector<string> A,B;
        int n;
        cin >> n;
        getchar();
        while(n--){
            string a;
            getline(cin,a);
            A.push_back(a);
            for (int j=0;j<a.length();j++){
                if (a[j]>=97 && a[j]<=122){
                    a[j]-=32;
                }
            }
            B.push_back(a);
        }
        int index=0;
        string C;
        cin >> C;
        for (int j=0;j<C.length();j++){
            if (C[j]>=97 && C[j]<=122){
                C[j]-=32;
            }
        }
        for (int j=0;j<B.size();j++){
            index=0;
            for (int k=0;k<B[j].length();k++){
                if (B[j][k]==C[index]){
                    index++;
                }
            }
            if (index==C.length()){
                cout << A[j] << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}