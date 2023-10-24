// C++ program to print a
// inverted mirrored right triangle
#include <iostream>
using namespace std;

// Driver code
int main()
{
	int n = 5;

	// ith row has n-i+1 elements
	for (int i = 1; i <= n; i++) {
		// leading spaces
		for (int j = 1; j < i; j++)
			cout << " ";
		for (int j = 1; j <= n - i + 1; j++)
			cout << "* ";
		cout << endl;
	}
	return 0;
}
