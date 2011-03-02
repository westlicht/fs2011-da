#include <iostream>

using namespace std;

/**
 * Finds the largest partial positive sum on the data array.
 */
static int find_max_positive_sum(int n, int *data)
{
	int max = 0;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += data[i];
		if (sum < 0)
			sum = 0;
		if (sum > max)
			max = sum;
	}

	return max;
}

int main()
{
	int t;

	// For each testcase
	for (cin >> t; t > 0; t--) {
		int n, m;
		int *data;
		cin >> n;
		data = new int[n];
		for (int i = 0; i < n; i++)
			cin >> data[i];
		m = find_max_positive_sum(n, data);
		delete [] data;
		cout << m << endl;
	}

	return 0;
}

