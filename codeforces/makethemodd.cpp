// https://codeforces.com/problemset/problem/1277/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


void solve()
{
	int n;
	cin >> n;

	set<int> st;
  for(int i = 0; i < n; i++)
  {
  	int x;
  	cin >> x;
  	st.insert(x);
  }
  int ans = 0;
  while (!st.empty())
  {
  	int val = *st.rbegin();
  	st.erase(val);

  	if(val % 2 ==0)
  	{
  		ans++;
  		st.insert(val / 2);
  	}	
  }
  cout << ans << endl;
}


int main()
{
	int t;
	cin >> t;
	 for(int i = 0; i < t; i++) solve();
	 	return 0;
}
