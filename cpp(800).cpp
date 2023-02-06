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
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s , news;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0) {
			news += toupper(s[i]);
		}
		else {
			news += s[i];
		}
	}
	cout << news;
} 

10) Boy or Girl
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	vector<int>v;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()),v.end());
	if (v.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
} 

11) A. Stones on the Table

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, counter = 0;
	vector<int>v;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == s[i + 1]) {
			counter++;
		}
	}
	cout << counter;
}

12) A. Bear and Big Brother
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b , counter = 0;
	cin >> a >> b;
	while (b >= a) {
		a *= 3;
		b *= 2;
		counter++;
	}
	cout << counter;
	
}

13) 546A - Soldier and Bananas
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, n, w, j = 0, price = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		j += k * i;
	}
	price = j - n;
	if (price >= 0) {
		cout << price;
	}
	else {
		cout << 0;
	}
}

14) 617A - Elephant
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x;
	cin >> x;
	if ((x / 5) == ceil(x / 5)) {
		cout << (x / 5);
	}
	else {
		cout << int((x / 5) + 1);
	}
}

15) A. Word

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int upper = 0, lower = 0;
	for (int i = 0; i < s.size(); i++) {
		if (toupper(s[i]) == s[i]) {
			upper++;
		}
		else {
			lower++;
		}
	}
	if (upper > lower) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << s;
	}
	else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s;
	}
}

16) A. Wrong Subtraction

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k; 
	cin >> n >> k;
	while (k > 0) {
		if (n % 10 == 0) {
			n = n / 10;
		}
		else {
			n = n - 1;
		}
		k--;
	}
	cout << n;
}

17) A. Nearly Lucky Number
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	int counter = 0 , lucky = 0;
	cin >> n;
	string j = to_string(n);
	for (int i = 0; i < j.size(); i++) {
		if (j[i] == 52 || j[i] == 55) { /* 4 = 52 && 7 = 55 ascii table*/
			counter++;
		}
	}
	string jj = to_string(counter);
	for (int k = 0; k < jj.size(); k++) {
		if (jj[k] == 52 || jj[k] == 55) {
			lucky++;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
		cout << "YES";
}

18) 734A - Anton and Danik

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , A = 0, D = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 65) {
			A++;
		}
		else {
			D++;
		}
	}
	if (A > D) {
		cout << "Anton";
	}
	else if (D > A) {
		cout << "Danik";
	}
	else {
		cout << "Friendship";
	}
}

19) A. Tram

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,counter = 0;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		counter += b - a;
		v.push_back(counter);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1];
}

20) A. Translation
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	int i, j = t.size() - 1;
	int counter = 0;
	for (i = 0; i < s.size(); i++) {
		if (s[i] != t[j]) {
			cout << "NO";
			return 0;
		}
		else {
			counter++;
		}
		j--;
	}
	cout << "YES";
}

21) A. Fafa and his Company
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n , counter  = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (int((n - i) / i) == (n - i) / i) {
			counter++;
		}
	}
	cout << counter;
}

22) 1353A - Most Unstable Array	
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t , n ,m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n == 1) {
			cout << 0 << endl;
		}
		else if (n == 2) {
			cout << m << endl;
		}
		else {
			cout << m * 2 << endl;
		}
	}
}

23) 959A - Mahmoud and Ehab and the even-odd game
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << "Mahmoud";
	}
	else {
		cout << "Ehab";
	}
}

24) A. Special Permutation
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t ,n;
	cin >> t;
	vector<int>v;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			v.push_back(i);
		}
		for (int j = 1; j < v.size(); j++) {
			swap(v[j], v[j - 1]);
		}
		for (int k = 0; k < v.size(); k++) {
			cout << v[k] + 1 << " ";
		}
		v.clear();
		cout << endl;
	}
}

25) 1358A - Park Lighting
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
	cin >> n >> m;
	if ((m * n) % 2 == 0) {
		cout << ((m * n) / 2) << endl;
	}
	else {
		cout << ((m * n) / 2) + 1 << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}

26) 1722A - Spell Check
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, counter = 0;
	string s , t = "Timur";
	cin >> n >> s;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if (s == t) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}



27) 1676B - Equal Candies

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n , a , min , counter = 0;
	vector<int>v;
	cin >> n;
	while (n--) {
		cin >> a;
		v.push_back(a);
	}
    min = *min_element(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (v[i] != min) {
			counter += (v[i] - min);
		}
	}
	v.clear();
	cout << counter << endl;
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

28) 1542A - Odd Set
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a , counter1 = 0, counter2 = 0;
	vector<int>v;
	cin >> n;
	n *= 2;
	while (n--) {
		cin >> a;
		v.push_back(a);
	}
	if (v[0] % 2 == 0) {
		counter1++;
	}
	else {
		counter2++;
	}
	for (int i = 1; i < v.size(); i++) {
		if (i < v.size() / 2) {
			if (v[i] % 2 == 0) {
				counter1++;
			}
			else {
				counter2++;
			}
		}
		else {
			if (v[i] % 2 == 0) {
				counter1++;
			}
			else {
				counter2++;
			}
		}
	}
	if (counter1 == counter2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	v.clear();
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

29) 1760A - Medium Number
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n, j, k;
	cin >> n >> j >> k;
	if ((n > j || k > j )&& (j > k || j > n)){
		cout << j << "\n";
	}
	else if((j > n || k > n)&& (n > k || n > j)){
		cout << n << "\n";
	}
	else {
		cout << k << "\n";
	}
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

30) 1296A - Array with Odd Sum

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n,a,counter = 0 , odd = 0 , even = 0;
	cin >> n;
	while (n--) {
		cin >> a;
		counter += a;
		if (a % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
 
	}
	if (counter % 2 == 1 || (even && odd)) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

31) 1385B - Restore the Permutation by Merger
#include <bits/stdc++.h>
using namespace std;
void remove(vector<int>& v)
{
	auto end = v.end();
	for (auto it = v.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}
 
	v.erase(end, v.end());
}
void solve() {
	int n, a;
	cin >> n;
	vector<int>v;
	n *= 2;
	while (n--) {
		cin >> a;
		v.push_back(a);
	}
	remove(v);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	v.clear();
	cout << "\n";
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

32) 1703B - ICPC Balloons
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s;
	cin >> n >> s;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()) , v.end());
	cout << (n * 2) - (n - v.size()) << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

33) 1722B - Colourblindness
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, R = 0, G_B = 0;
	cin >> n;
	char arr[2][100];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
		for (int j = 0; j < n; j++) {
			if ((arr[0][j] == arr[1][j] - 5) || (arr[0][j] == arr[1][j] + 5) || (arr[0][j] == arr[1][j])) {
				G_B++;
			}
			else {
				R++;
			}
	}
	if (R) {
		cout << "NO" << "\n";
	}
	else {
		cout << "YES" << "\n";
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

34)
