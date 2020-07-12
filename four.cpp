#include<bits/stdc++.h>
using namespace std;

int solve(int N) {
	if(N <= 2) return 1;
	int a = 1, b = 1;
	for(int i=3;i<=N;i++) {
		int temp = b; // copy prev value of b into temp
		b = b + a; // update b
		a = temp; // copy temp into a
	}
	return b;
}

int main(){
	int T; // test cases
	cin>>T;
	for(int i=0;i<T;i++) {
		int N;
		cin>>N;
		cout << solve(N) << endl;
	}
}