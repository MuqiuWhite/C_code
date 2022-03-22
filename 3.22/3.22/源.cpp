#include <iostream>
#include <vector>
using namespace std;

class T
{
public:
	int t1(int m, vector<int>A, vector<int> V)
	{
		if (A.empty() || V.empty() || m < 1)
		{
			return 0;
		}
		const int row = A.size()+1;
		const int line = m + 1;
		/*vector<vector<int>> maxv;
		maxv.resize(row);
		for (int i = 0; i < row ; i++)
		{
			maxv[i].resize(line, 0);
		}

		for (int i = 1; i < row; i++)
		{
			for (int j = 1; j < line; j++)
			{
				if (A[i - 1] <= j)
				{
					maxv[i][j] = max(maxv[i - 1][j], maxv[i - 1][j - A[i - 1]] + V[i - 1]);
				}
				else
					maxv[i][j] = maxv[i - 1][j];
			}
		}
		return maxv[row - 1][line - 1];*/

		vector<int>maxv;
		maxv.resize(line,0);
		for (int i = 0; i < row; i++)
		{
			for (int j = line; j > 0; j--)
			{
				if (A[i] <= j)
				{
					maxv[j] = max(maxv[j], maxv[j - A[j]] + V[j]);
				}
			}
		}
		return maxv[line - 1];
	}
	bool is(string s, int b, int e)
	{
		while (b<e)
		{
			if (s[b] != s[e])
				return false;
			b++;
			e--;
			
		}
		return true;
	}
	int mincut(string s)
	{
		if (s.empty())
			return 0;
		vector<int>cut;
		int len = s.size();
		for (int i = 1; i <=len; i++)
		{
			cut[i] = i - 1;
		}

		for (int i = 1; i <= len; i++)
		{
			if (is(s, 0, i - 1))
			{
				cut[i] = 0;
				continue;
			}
			for (int j = 1; j < i; j++)
			{
				if (is(s, j, i - 1))
				{
					cut[i] = min(cut[i], cut[j] + 1);
				}
			}
		}
		return cut[len];
	}

};
for (int i = 1; i < 1 + len; ++i) {
	for (int j = 0; j < i; ++j) {
		
		if (is(s, j, i - 1)) {
			cut[i] = min(cut[i], 1 + cut[j]);
		}
	}
}