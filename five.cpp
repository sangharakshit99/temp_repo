#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> visitors) {
	set<int> unique_visitors;// declare a set, set do not contain duplicates
	for(int i=0;i<visitors.size();i++) { // visitors.size() can give size of visitors
		unique_visitors.insert(visitors[i]);
	}
	return unique_visitors.size();// size of set.
}

int main(){
	int N; // size of input array
	cin>> N;
	vector<int> visitors(N);
	for(int i=0;i<N;i++) {
		cin>>visitors[i];
	}
	cout << solve(visitors) << endl;
}