#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	for(int a = 0, b = s.length() - 1; a < s.length() / 2; a++) {
		swap(s[b], s[a]);
		b--;
	}
	cout << s << endl;
}
