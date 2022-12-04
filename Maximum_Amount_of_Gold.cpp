#include<bits/stdc++.h>
using namespace std;
int solve(int W, vector<int> val, int n) {
	
	vector<vector<int>>  dp(n + 1,vector<int>(W + 1));
	for (int i = 0; i <= n; i++) {
		for (int w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				dp[i][w] = 0;
			else if (val[i - 1] <= w)
				dp[i][w] = max(val[i - 1] + dp[i - 1][w - val[i - 1]], dp[i - 1][w]);
			else
				dp[i][w] = dp[i - 1][w];
		}
	}

	return dp[n][W];
}

int main() {
	int n, W;
	cin >> W >> n;

	vector<int> Values(n);
	int Temp;
	for (size_t i = 0; i < n; i++) {
		cin >> Temp;
		Values[i] = Temp;
	}
	cout << solve(W, Values,n) << endl;
}
