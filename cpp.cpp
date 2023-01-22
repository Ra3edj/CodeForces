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

3) A. Team
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int Petya , Vasya , Tonya;
		cin >> Petya >> Vasya >> Tonya;
		if (Petya + Vasya + Tonya > 1) {
			count++;
	   }
	}
	cout << count;

}
4) Next Round
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int arr[10000], count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > 0)
		{
			if (arr[i] >= arr[k - 1])
			{
				count++;
			}
		}
	}
	cout << count;
} 

5) 50A - Domino piling
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int m, n;
	cin >> m >> n;
	cout << m * n / 2;
} 

6) Submit solution
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, x = 0;
	cin >> n;
    string statements;
	for (int i = 0; i < n; i++) {
		cin >> statements;
		if(statements == "X++" || statements == "++X") {
			x++;
		}
		else if (statements == "--X" || statements == "X--") {
		  x--;
		}
 
	}
	cout << x;
} 

7) 
