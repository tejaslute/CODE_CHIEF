
#include <bits/stdc++.h>
using namespace std;

string ByWords(string s,int n) {
  vector < string > words;
  int count=0;
  string word = "";
  for (char c: s) {
    if (c == ' ') {
        count++;
        if(count==n)
        {
            reverse(word.begin(),word.end());
        }
      words.push_back(word);
      word = "";
    } else {
      word += c;
    }
  }
  words.push_back(word);
  string ans = "";
  
  for (auto x: words) {
    ans += x;
    ans += " ";
  }
  cout<<ans<<endl;
  return ans;
}


int main()
{
	string s ;
	getline(cin,s);
	int n;
	cin>>n;
	cout<<ByWords(s,n+1);
	return 0;
}
