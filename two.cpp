#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> price, int Q, int K) {
	sort(price.begin(),price.end()); // sort the price array, lowest price first.
	int N = price.size(); // you can get size of array by this.

	int cost = 0;
	for(int i = 0;i<N;i++) {
		if(K == 0) break;
		if(K < Q) {
			cost += K * price[i]; // if stocks left to buy are less than Q, buy all on this day.
			K -= K;
		} else {
			cost += Q * price[i]; // if stocks left to buy are equal or more than Q, then buy Q stocks on this day.
			K -= Q;
		}
	}

	return cost;
}

int main(){
	// take input
	int N;
	cin>>N;
	vector<int> price(N);// declare a vector of int of size N;
	for(int i=0;i<N;i++) {
		cin>>price[i];
	}
	int Q,K;
	cin>>Q>>K;

	// fetch the solution
	int ans = solve(price,Q,K);

	// print the solution
	cout << ans << endl;
}