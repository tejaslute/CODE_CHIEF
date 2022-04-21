#include <iostream>
using namespace std;

int main() {
	// your code goes here kk
	int t;
	cin >> t;
	while (t--) {
		int m;
		cin >> m;
		int s[m], d[m];
		int count = 0;
		for (int i = 0; i < m; i++) {
			cin >> s[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> d[i];
		}
		for (int i = 0; i < m; i++) {

			if (s[i] == d[i]) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
