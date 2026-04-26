#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
1 : "Yakk"
2 : "Doh"
3 : "Seh"
4 : "Ghar"
5 : "Bang"
6 : "Sheesh"

1 - 1 : "Habb Yakk"
2 - 2 : "Dobara"
3 - 3 : "Dousa"
4 - 4 : "Dorgy"
5 - 5 : "Dabash"
6 - 6 : "Dosh"

 6-5 ( 5-6 ) "Sheesh Bang" 대신에 "Sheesh Beesh"
*/
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, a, b;

	string k[6] = {"Yakk","Doh","Seh","Ghar","Bang","Sheesh" };
	string s[6] = { "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;

		cout << "Case " << i << ": ";

		if (a == b)
		{
			cout << s[a - 1] << "\n";
		}
		else
		{
			int bignum = max(a, b);
			int smallnum = min(a, b);
			if (bignum == 6 && smallnum == 5)
			{
				cout << "Sheesh Beesh\n";
			}
			else {
				cout << k[bignum - 1] << " " << k[smallnum - 1] << "\n";
			}
		}
	}

	return 0;
}
