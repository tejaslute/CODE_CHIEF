/*Problem
Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
You are participating in a contest which has 1111 problems (numbered 11 through 1111). The first eight problems (i.e. problems 1, 2, \ldots, 81,2,…,8) are scorable, while the last three problems (99, 1010 and 1111) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.

Your total score is the sum of your best scores for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or 00 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took.

You know the results of all submissions you made. Calculate your total score.*/
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		int sum = 0;
		cin >> x;
		int p[x], s[x];
		for (int i = 0; i < x; i++)
		{
			cin >> p[i] >> s[i];
		}
		for (int j = 1; j < 9; j++)
		{
			int max = 0;
			for (int i = 0; i < x; i++)
			{
				if (p[i] == j)
				{
					if (s[i] > max)
					{
						max = s[i];
					}
				}
			}
			sum += max;
		}
		cout << sum << endl;
	}
	return 0;
}
