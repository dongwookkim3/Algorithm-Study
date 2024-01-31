#include <iostream>
using namespace std;
int main(){
	int n;
	int A[4]={},B[4]={},C[4]={};
	cin >> n;
	while(n--){
		int a,b,c;
		cin >> a >> b >> c;
		A[a]++;
		B[b]++;
		C[c]++;
	}
	int Am=A[1]+A[2]*2+A[3]*3;
	int Bm=B[1]+B[2]*2+B[3]*3;
	int Cm=C[1]+C[2]*2+C[3]*3;
	if (Am==Bm && Bm==Cm){
		if (A[3]==B[3] && B[3]==C[3]){
			if (A[2]==B[2] && B[2]==C[2]){
				if (A[1]==B[1] && B[1]==C[1]) cout << 0 << ' ' << Am;
				else if (A[2]==B[2]){
					if (A[1]==B[1]) cout << 0 << ' ' << Am;
				}
				else if (B[2]==C[2]){
					if (B[1]==C[1]) cout << 0 << ' ' << Bm;
				}
			}
			else if (A[3]==B[3]){
				if (A[2]!=B[2]){
					if (A[2]>B[2]) cout << 1 << ' ' << Am;
					else cout << 2 << ' ' << Bm;
				}
				else if (A[1]!=B[1]){
					if (A[1]>B[1]) cout << 1 << ' ' << Am;
					else cout << 2 << ' ' << Bm;
				}
				else cout << 0 << ' ' << Am;
			}
			else if (B[3]==C[3]){
				if (B[2]!=C[2]){
					if (B[2]>C[2]) cout << 2 << ' ' << Bm;
					else cout << 3 << ' ' << Cm;
				}
				else if (B[1]!=C[1]){
					if (B[1]>C[1]) cout << 2 << ' ' << Bm;
					else cout << 3 << ' ' << Cm;
				}
				else cout << 0 << ' ' << Bm;
			}
		}
		if (A[3]>B[3] && A[3]>C[3]) cout << 1 << ' ' << Am;
		else if (B[3]>A[3] && B[3]>C[3]) cout << 2 << ' ' << Bm;
		else if (C[3]>A[3] && C[3]>B[3]) cout << 3 << ' ' << Cm;
	}
	else if (Am==Bm && Am>Cm){
		if (A[3]!=B[3]){
			if (A[3]>B[3]) cout << 1 << ' ' << Am;
			else cout << 2 << ' ' << Bm;
		}
		else if (A[2]!=B[2]){
			if (A[2]>B[2]) cout << 1 << ' ' << Am;
			else cout << 2 << ' ' << Bm;
		}
		else if (A[1]!=B[1]){
			if (A[1]>B[1]) cout << 1 << ' ' << Am;
			else cout << 2 << ' ' << Bm;
		}
		else cout << 0 << ' ' << Am;
	}
	else if (Bm==Cm && Bm>Am){
		if (B[3]!=C[3]){
			if (B[3]>C[3]) cout << 2 << ' ' << Bm;
			else cout << 3 << ' ' << Cm;
		}
		else if (B[2]!=C[2]){
			if (B[2]>C[2]) cout << 2 << ' ' << Bm;
			else cout << 3 << ' ' << Cm;
		}
		else if (B[1]!=C[1]){
			if (B[1]>C[1]) cout << 2 << ' ' << Bm;
			else cout << 3 << ' ' << Cm;
		}
		else cout << 0 << ' ' << Bm;
	}
	else if (Cm==Am && Cm>Bm){
		if (A[3]!=C[3]){
			if (A[3]>C[3]) cout << 1 << ' ' << Am;
			else cout << 3 << ' ' << Cm;
		}
		else if (A[2]!=C[2]){
			if (A[2]>C[2]) cout << 1 << ' ' << Am;
			else cout << 3 << ' ' << Cm;
		}
		else if (A[1]!=C[1]){
			if (A[1]>C[1]) cout << 1 << ' ' << Am;
			else cout << 3 << ' ' << Cm;
		}
		else cout << 0 << ' ' << Cm;
	}
	else {
		if (Am>Bm && Am>Cm) cout << 1 << ' ' << Am;
		else if (Bm>Am && Bm>Cm) cout << 2 << ' ' << Bm;
		else if (Cm>Am && Cm>Bm) cout << 3 << ' ' << Cm;
	}
	return 0;
}