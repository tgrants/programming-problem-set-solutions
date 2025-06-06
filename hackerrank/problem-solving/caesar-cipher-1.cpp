// https://www.hackerrank.com/challenges/caesar-cipher-1

#include <cctype>
#include <iostream>
#include <string>

int main() {
	int n, k;
	std::string s;
	std::cin >> n >> s >> k;

	k %= 26;

	for (int i = 0; i < s.size(); i++) {
		if (!std::isalpha(s[i])) continue;
		if (s[i] > 'Z') {
			if (s[i] >= 'a' - k && s[i] <= 'z' - k) s[i] += k;
			else s[i] -= 26 - k;
		} else {
			if (s[i] >= 'A' - k && s[i] <= 'Z' - k) s[i] += k;
			else s[i] -= 26 - k;
		}
	}

	std::cout << s;
	return 0;
}

/* Test case 2
 * In:  10 www.abc.xy 87
 * Out: fff.jkl.gh
 *
 * Test case 6
 * In: 90 !m-rB`-oN!.W`cLAcVbN/CqSoolII!SImji.!w/`Xu`uZa1TWPRq`uRBtok`xPT`lL-zPTc.BSRIhu..-!.!tcl!-U 62
 * Out:   !w-bL`-yX!.G`mVKmFlX/MaCyyvSS!CSwts.!g/`He`eJk1DGZBa`eBLdyu`hZD`vV-jZDm.LCBSre..-!.!dmv!-E
 *
 * Custom test case 1
 * In: 26 ABCDEFGHIJKLMNOPQRSTUVWXYZ 62
 * Out:   KLMNOPQRSTUVWXYZABCDEFGHIJ
 *
 * Custom test case 2
 * In: 26 abcdefghijklmnopqrstuvwxyz 62
 * Out:   klmnopqrstuvwxyzabcdefghij
 */
