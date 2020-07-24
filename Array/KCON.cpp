#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{	
		long long int N, K;
		cin >> N >> K;
		//long long int n = N*K;
		long long int A[N];
		for(long long int i = 0; i < N; i++)
		{
			cin >> A[i];
		}
	
		long long int current_sum = A[0];
		long long int global_sum = current_sum;
		for(long long int i = 1; i < N*K; i++)
		{
			current_sum = current_sum + A[i%N];
			if(A[i%N] > current_sum)
			{
				current_sum = A[i%N];
			}
			if(current_sum > global_sum)
			{
				global_sum = current_sum;
			}
		}
		cout << global_sum << endl;		
	}
	return 0;
}
