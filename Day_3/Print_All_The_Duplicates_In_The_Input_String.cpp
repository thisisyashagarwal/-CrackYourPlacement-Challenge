#include <bits/stdc++.h>
using namespace std;

void printDups(string str)
{
	map<char, int> count;
	for (int i = 0; i < str.length(); i++) {
		count[str[i]]++;
	}
  map<char, int>::iterator itr;
	for (itr = count.begin(); itr!= count.end(); itr++) 
  {
		if (itr->second > 1)
			cout << itr->first << ", count = " << itr->second << "\n";
	}
}
/* Driver code*/
int main()
{
	string str = "test string";
	printDups(str);
	return 0;
}
