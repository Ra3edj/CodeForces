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

7) A. Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                cout << abs(i - 3) + abs(j - 3) << endl;
                break;
            }

        }
    return 0;
} 

8) 112A - Petya and Strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        int num1 = tolower(a[i]);
        int num2 = tolower(b[i]);
        if (num1 > num2) {
            cout << 1 << endl;
            return 0;
        }
        else if (num1 < num2) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

} 

8)339A - Helpful Maths
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, news = "";
	vector<int>v;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 0) {
			v.push_back(s[i]);
			sort(v.begin(), v.end());
		}
	}
	for (int j = 0; j < v.size(); j++) {
		if (v[j] == 49) {
			news += "+1";
		}
		else if (v[j] == 50) {
			news += "+2";
		}
		else{
				news += "+3";
		}
	}
	news.erase(0, 1);
		cout << news;
} 

9) Word Capitalization
