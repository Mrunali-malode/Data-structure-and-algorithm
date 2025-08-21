// https://codeforces.com/contest/1551/problem/B1
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int n =s.length();

	vector<int> cnt(26,0);
	for ( int i =0;i<n;i++){
		cnt[s[i] - 'a']++;
	}

	int cnt1= 0, cnt2 = 0;
	for(int i = 0; i < 26; i++){
		if(cnt[i] == 1) cnt1++;
		else if (cnt[i] >= 2) cnt2++;
	}
  int ans = cnt2 + cnt1 / 2;
  cout << ans << endl;
}

int main()
{
	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) solve();
		return 0;
}