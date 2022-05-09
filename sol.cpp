#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ones = count(a.begin(), a.end(), 1);
		int zeroes = n - ones;
		if (ones > n / 2) {
			vector<int> res;
			for (int i = 0; i < n; i++) {
				if (a[i] == 1) {
					res.push_back(a[i]);
				}
			}
			if (ones & 1) {
				ones--;
			}
			cout << ones << '\n';
			for (int i = 0; i < (int) ones; i++) {
				cout << res[i] << " ";
			}
		} else {
			cout << zeroes << '\n';
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) {
					cout << a[i] << " ";
				}
			}
		}
		cout << '\n';
	}
	return 0;
}
