#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,A=0,B=0,C=0,D=0;
    cin >> n;
    while(n--){
    	int a,b,c;
    	cin >> a >> b >> c;
    	if (a==1) D++;
    	else{
    		if (b==1 || b==2) A++;
    		else if (b==3) B++;
    		else C++;
		}
	}
	cout << A << "\n" << B << "\n" << C << "\n" << D << "\n";
    return 0;
}