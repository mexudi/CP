#include<bits/stdc++.h>
using namespace std;
long long operation(long long  Operand_1, long long  Operand_2, char op) {
	if (op == '*')
		return Operand_1 * Operand_2;
	else if (op == '+')
		return Operand_1 + Operand_2;
	else if (op == '-')
		return Operand_1 - Operand_2;
		
}

long long  solve(const string &Expre) {
	int Len = Expre.size();
	int NumOfOperands = (Len + 1) / 2;

	long long  Mini[NumOfOperands][NumOfOperands];
	long long  Maxi[NumOfOperands][NumOfOperands];

	memset(Mini, 0, sizeof(Mini)); 
	memset(Maxi, 0, sizeof(Maxi)); 
	for (int i = 0; i < NumOfOperands; i++) {

		Mini[i][i] = stoll(Expre.substr(2 * i, 1));
		Maxi[i][i] = stoll(Expre.substr(2 * i, 1));
	}

	for (int s = 0; s < NumOfOperands - 1; s++) {
		for (int i = 0; i < NumOfOperands - s - 1; i++) {
			int j = i + s + 1;
			long long  MinValue = LLONG_MAX;
			long long MaxValue = LLONG_MIN;

			for (int k = i; k < j; k++) {
				long long  a = operation(Mini[i][k], Mini[k + 1][j], Expre[2 * k + 1]);
				long long  b = operation(Mini[i][k], Maxi[k + 1][j], Expre[2 * k + 1]);
				long long  c = operation(Maxi[i][k], Mini[k + 1][j], Expre[2 * k + 1]);
				long long  d = operation(Maxi[i][k], Maxi[k + 1][j], Expre[2 * k + 1]);

				MinValue = min(MinValue, min(a, min(b, min(c, d))));
				MaxValue = max(MaxValue, max(a, max(b, max(c, d))));

			}
			Mini[i][j] = MinValue;
			Maxi[i][j] = MaxValue;
		}
	}

	return Maxi[0][NumOfOperands - 1];
}

int main() {
	string Expresion;
	cin >> Expresion;

	cout << solve(Expresion) << endl;
}