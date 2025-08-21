// https://codeforces.com/problemset/problem/637/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <string> arr(n);
	for (int i = 0; i<n ;i++){
		cin >> arr[i];
	}
   
    set<string> st;
    for(int i = n - 1; i>= 0; i--){
    	if (st.find(arr[i]) == st.end())
    	{
    		cout << arr[i] << endl;
    		st.insert(arr[i]);
    	}
    }
  }