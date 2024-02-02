#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>

using namespace std;
string solve(string A) {
  unordered_map<char, int> umap;
  queue<char> q;
  string ans;
  for (auto ch : A)
  {
	umap[ch] += 1;
	q.push(ch);
	while (!q.empty())
	{
	  int f = umap[q.front()];
	  if (f > 1)
	  {
		q.pop();
	  }
	  else {
		ans.push_back(q.front());
		break;
	  }
	}
	if (q.empty())
	{
	  ans.push_back('#');
	}
  }
  return ans;
}
int main()
{
  cout << "hello pronlem string\n";
  cout << solve("abcndef") << endl;
  return 0;
}