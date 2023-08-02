// C++ Implementation for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the coordinates of n
void findCoordinates(int n)
{
	// Store the row and column of
	// n respectively
	int r, c;

	// Stores the inverted L
	// in which n lies
	int l = ceil(sqrt(n));

	// Stores the difference between
	// square of l and n
	int d = (l * l) - n;

	// If d is less than l
	if (d < l) {
		r = l;
		c = d + 1;
	}
	else {
		c = l;
		r = (2 * l) - d - 1;
	}

	cout << r << " " << c;
}

// Driver code
int main()
{
	// Given n
	int N = 10549857;

	// Function call
	findCoordinates(N);

	return 0;
}
