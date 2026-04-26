#include<iostream>
#include<string>

using namespace std;

class exam {

public:
	void test(string ch) {

		if (ch == "SONGDO") {
			cout << "HIGHSCHOOL";
		}
		else if (ch == "CODE") {
			cout << "MASTER";
		}
		else if (ch == "2023") {
			cout << "0611";
		}
		else if (ch == "ALGORITHM") {
			cout << "CONTEST";
		}

	}
};

int main()
{
	string ch;

	cin >> ch;

	exam ex = exam();

	ex.test(ch);

	return 0;
}