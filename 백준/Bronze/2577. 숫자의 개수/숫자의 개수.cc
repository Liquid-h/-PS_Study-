#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;

	int result;
	
	cin >> a >> b >> c;	
	
	result = a * b * c;

	string i_result = to_string(result);

	vector<char> v(i_result.begin(), i_result.end());
	vector<int> sans(10, 0);

	for (int i = 0; i < i_result.size(); i++)
	{
		sans[i_result[i] - '0']++;
	}

	for (int i = 0; i < sans.size()	; i++)
	{
		cout << sans[i] << "\n";
	}

	return 0;
}