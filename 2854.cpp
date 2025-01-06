#include <iostream>
#include <string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int N, M, n;
		string A, B;
		cin >> N >> M >> A >> B >> n;
		if (N != M) {
			if (n == 1)cout << A << "\n";
			else cout << B << "\n";
		}
		else {
			if (n == 1)cout << B << "\n";
			else cout << A << "\n";
		}
	}
}
