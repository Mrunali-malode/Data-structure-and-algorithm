// https://codeforces.com/contest/1174/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	long long n;
	cin >> n;
	n *= 2;
	vector <long long> v(n);
	for(int i = 0;i<n;i++)
		cin>>v[i];
      
	sort(v.begin(), v.end());
     long long firstN = 0;
     long long lastN=0;

     for(int i = 0;i<n/2;i++)
     	firstN += v[i];

     for(int i = n/2;i<n;i++)
     	lastN += v[i];

     if(firstN != lastN)
     {
     	for(int i = 0; i<n; i++)
     		cout<< v[i] << " ";
     	cout<< endl;
     }
     else cout<< -1 <<endl;

     return 0;
}