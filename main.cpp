#include<iostream>
#include<string>

using namespace std;

int main() {
	int disc = 0;
	string a[2] = {"", ""};
	int occs[2] = {0, 0};

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		if (disc < 2) {
			if (disc == 1) {
				if (a[0] == tmp) occs[0]++;
				else {
					a[disc++] = tmp;
					occs[1]++;
				}
			}
			else {
				a[disc++] = tmp;
				occs[0]++;
			}
		}
		else {
			occs[tmp == a[1]]++;
		}
	}

	cout << a[occs[0] < occs[1]];
}
