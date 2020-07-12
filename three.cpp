#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

int solve(int A, int B) {
	return gcd(A,B);
}

int main(){
	int T; // test cases
	cin>>T;
	for(int i=0;i<T;i++) {
		int A,B;
		cin>>A>>B;
		int ans = solve(A,B);
		cout << ans << endl;
	}
}