#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    int arr[30];
    int n;

    for (int i = 1; i < 31; i++) {
        arr[i - 1] = i;
    }
    for (int i = 1; i < 29; i++) {
        cin >> n;
        arr[n - 1] = 0;
    }
    for (int i = 1; i < 31; i++) {
        if (arr[i - 1] != 0) cout << arr[i - 1] << endl;
    }
	return 0;
}
