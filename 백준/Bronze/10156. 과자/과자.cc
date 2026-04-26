#include<iostream>
#include<vector>
#include <utility>
using namespace std;
/*
꿍실냐옹
*/
int main(void)
{
	int k, n, m;
	cin >> k >> n >> m;
	if (k * n - m < 0)
	{
		cout << "0";
	}
	else 
	{
		cout << k * n - m << endl;
	}
	return 0;
}
