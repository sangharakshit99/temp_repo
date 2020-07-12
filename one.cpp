#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int N, vector<int> earnings, int Q, vector<pair<int,int> > queries) {
	vector<int> prefix_sum(N); // vector of prefix sums
	prefix_sum[0] = earnings[0];
	for(int i=1;i<N;i++) { // notice it starts from 1
		prefix_sum[i] = prefix_sum[i-1] + earnings[i]; // ith element of prefix_sum array contains sum of earnings till i.
	}

	vector<int> ans(Q); // vector to store ans of Q queries
	for(int i=0;i<Q;i++) { // compute ans
		int l = queries[i].first -1; // input was 1 based but earnings array is 0 based.
		int r = queries[i].second - 1; // same convert input to 0 based

		if(l == 0) ans[i] = prefix_sum[r];// sum till r if l is 0
		else ans[i] = prefix_sum[r] - prefix_sum[l-1]; // sum till r - sum till (l-1)
	}
	return ans;
}
int main(){
	// take input
	int N;
	cin>>N;
	vector<int> earnings(N);// declare a vector of int of size N;
	for(int i=0;i<N;i++) {
		cin>>earnings[i];
	}
	int Q;
	cin>>Q;
	vector<pair<int,int> > queries(Q); // declare a vector of pair of int of size N;
	for(int i=0;i<Q;i++) {
		int l,r;
		cin>>l>>r;
		queries[i] = pair<int,int>(l,r);
	}

	// fetch the solution
	vector<int> ans = solve(N,earnings,Q,queries);

	// print the solution
	for(int i=0;i<Q;i++)  {
		cout << ans[i] << " ";
	}
	cout << endl;
}