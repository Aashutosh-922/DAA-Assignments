// C++ program for Travelling salesman Problem. by using Greedy aproach
#include <bits/stdc++.h>
using namespace std;

void min(vector<vector<int> > v)
{
	int sum = 0;
	int count= 0;
	int j = 0, i = 0;
	int min = INT_MAX;
	map<int, int> visit;

	visit[0] = 1;
	int main[v.size()];

	while (i < v.size() && j < v[i].size())
	{

		if (count >= v[i].size() - 1)
		{
			break;
		}

		if (j != i && (visit[j] == 0))
		{
			if (v[i][j] < min)
			{
				min = v[i][j];
				main[count] = j + 1;
			}
		}
		j++;

		if (j == v[i].size())
		{
			sum += min;
			min = INT_MAX;
			visit[main[count] - 1] = 1;
			j = 0;
			i = main[count] - 1;
			count++;
		}
	}

	i = main[count - 1] - 1;

	for (j = 0; j < v.size(); j++)
	{

		if ((i != j) && v[i][j] < min)
		{
			min = v[i][j];
			main[count] = j + 1;
		}
	}
	sum += min;

	cout << ("Minimum Cost is : ");
	cout << (sum);
}

int main()
{
	vector<vector<int> > v = { { -10, 40, 95, 70 },
								{ 40, -1, 5, 25 },
								{ 1, 35, -1, 30 },
								{ 20, 25, 30, -1 } };

	min(v);
}


