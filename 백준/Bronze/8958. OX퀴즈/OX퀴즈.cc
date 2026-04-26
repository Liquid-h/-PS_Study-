#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int testcase;
	string answer;

	cin >> testcase;

	vector<int> result(testcase);

	for (int i = 0; i < result.size(); i++)
	{
		cin >> answer;

		int stack = 0;

		vector<char> answer_list(answer.begin(), answer.end());

		for (int ii = 0; ii < answer_list.size(); ii++)
		{

			if (answer_list[ii] == 'O')
			{
				result[i]+= 1 + stack;
				stack++;
			}
			else
			{
				stack = 0;
			}
		}
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}
	return 0;
}