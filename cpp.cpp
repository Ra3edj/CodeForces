1) 4A - Watermelon
#include <bits/stdc++.h>
using namespace std;

int main() {
	int w;
	cin >> w;
	if (w % 2 == 0 && w != 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}

2) A. Way Too Long Words
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.size() > 10) {
			cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
		}
		else {
			cout << s << endl;
		}
	}

}

3) 
