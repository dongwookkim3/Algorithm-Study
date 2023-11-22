#include <iostream>
#define MAX 100
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A[MAX+1][MAX+1]={};
    int n,m,t=0;
    cin >> n >> m;
    while (n--){
    	int X1,Y1,X2,Y2;
    	cin >> X1 >> Y1 >> X2 >> Y2;
    	for (int X=X1;X<=X2;X++){
    		for (int Y=Y1;Y<=Y2;Y++){
    			A[X][Y]++;
			}
		}
	}
    for (int i=1;i<=MAX;i++){
    	for (int j=1;j<=MAX;j++){
    		if (A[i][j]>m) t++;
		}
	}
	cout << t;
    return 0;
}