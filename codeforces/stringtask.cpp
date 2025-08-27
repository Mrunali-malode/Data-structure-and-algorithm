// https://codeforces.com/problemset/problem/118/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
	string s;
	cin>>s;

	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i = 0; i < s.length();i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
              continue;
              else
              	cout<< "." << s[i];
	}
       cout<< endl;
       return 0;
}