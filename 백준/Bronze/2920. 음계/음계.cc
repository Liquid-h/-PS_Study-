#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> base1 = { 1,2,3,4,5,6,7,8 };
	vector<int> base2 = { 8,7,6,5,4,3,2,1 };
	vector<int> v(8);

	for (int i = 0; i <= 7; i++)
	{
		cin >> v[i];
	}
	if (v == base1)
	{
		cout << "ascending" << endl;
	}
	else if (v == base2)
	{
		cout << "descending" << endl;
	}
	else
	{
		cout << "mixed" << endl;
	}
	return 0;
}
