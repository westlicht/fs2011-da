#include <iostream>

using namespace std;

/**
 * Find the i'th element of a recursive function defined as follows:
 *
 *      | A                      , if i == 0
 * Ri = | B                      , if i == 1
 *      | C * Ri-1 + D * Ri-2    , otherwise
 *
 * i is in the range [0, 50].
 * A, B are in the range [-1000, 1000].
 * C, D are either -1 or 1.
 *
 * The algorithm performs iteration instead of the actual recursion to keep
 * stack usage low.
 */
static long long int find_recursion(int i, int A, int B, int C, int D)
{
	if (i < 0 || i > 50)
		// Reject if i is not in range [0, 50]
		return 0;
	else if (i == 0)
		// i == 0 returns A
		return A;
	else if (i == 1)
		// i == 1 returns B
		return B;
	else {
		// Perform iteration to find i'th value
		long long int t2 = A;
		long long int t1 = B;
		long long int t0 = 0;
		while (i-- > 1) {
			t0 = C * t1 + D * t2;
			t2 = t1;
			t1 = t0;
		}
		return t0;
	}
}

int main()
{
	int t;

	// For each testcase
	for (cin >> t; t > 0; t--) {
		int i, A, B, C, D;
		long long int t;
		cin >> i >> A >> B >> C >> D;
		t = find_recursion(i, A, B, C, D);
		cout << t << endl;
	}

	return 0;
}

