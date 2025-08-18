// https://codeforces.com/problemset/problem/1472/D
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	long long n;
	cin >> n;
	vector <long long> a(n);
	for(long long i = 0;i<n;i++)
		cin>>a[i];

	long long aliceSum = 0;
	long long bobSum = 0;

      
	sort(a.begin(), a.end());
	reverse(a.begin(),a.end());

      string turn = "A";

      for(int i = 0;i<n;i++)
      {
      	if(turn == "A")
      	{
      		if (a[i] % 2 == 0)
      			aliceSum += a[i];
      		turn = "B";
      	}
      	else
      	{
      		if (a[i] % 2 != 0)
      			bobSum += a[i];
      		 turn = "A";
      	}
      }
        if(aliceSum > bobSum)
        	cout<< "Alice" << endl;
        else if(aliceSum == bobSum)
        	cout<< "Tie" << endl;
        else 
            cout << "Bob" << endl;
        }
   

     return 0;
}