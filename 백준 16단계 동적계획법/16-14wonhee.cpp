// 5896kb, 4ms
#include<iostream>
#include<algorithm>
using namespace std;
int table[1001][1001] = { 0 };

//s1 : ACAYKP
//s2 : CAPCAK

//  0 A C A Y K P
//0 0 0 0 0 0 0 0
//C 0 0 1 1 1 1 1
//A 0 1 1 2 2 2 2
//P 0 1 1 2 2 2 3
//C 0 1 2 2 2 2 3
//A 0 1 2 3 3 3 3
//K 0 1 2 3 3 4 4

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s1, s2; 
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++)
		for (int j = 0; j < s2.size(); j++)
		{
			if (s1[i] == s2[j])
				table[i + 1][j + 1] = table[i][j] + 1;
			else
				table[i + 1][j + 1] = max(table[i + 1][j], table[i][j + 1]);
		}
	cout << table[s1.size()][s2.size()];
	return 0;
}
