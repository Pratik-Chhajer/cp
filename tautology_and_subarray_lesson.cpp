/*
	Aim of this problem is to teach idea
	of cumulative array. How pre computation
	can reduce time complexity drastically.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	// input n
	int n;
	scanf("%d",&n);

	// Array input
	long long int A[n+1];
	for(int i=1;i<=n;i++)
		scanf("%lld",&A[i]);

	// Creating a cumulative array B
	// B[i] = A[1] + A[2] + .... + A[i]
	// B[i-1] = A[1] + A[2] + .... + A[i-1]
	// Hence, B[i] = B[i-1] + A[i]
	// Also, B[0] = 0 (Think Why?)

	// Let, answer = A[i] + A[i+1] + .... + A[j]
	// answer = B[j] - B[i-1] (Think Why?)

	long long int B[n+1];
	for(int i=1;i<=n;i++)
		B[i] = B[i-1] + A[i];

	// input q
	int q;
	scanf("%d",&q);

	// Answering each query
	int i,j;
	long long int answer;
	for(int x=1;x<=q;x++){
		scanf("%d %d",&i,&j);
		answer = B[j] - B[i-1];
		printf("%lld\n",answer);
	}

	return 0;
}