// ternary search
#include <iostream>
using namespace std;

int ternarySearch(int s, int r, int key, int ar[])

{
	while (r >= s) {

		// Find the mid1 and mid2
		int mid1 = s + (r - s) / 3;
		int mid2 = r - (r - s) / 3;

		if (ar[mid1] == key) {
			return mid1;
		}
		if (ar[mid2] == key) {
			return mid2;
		}

		if (key < ar[mid1]) {
			r = mid1 - 1;
		}

		else if (key > ar[mid2]) {
			s = mid2 + 1;
		}
		else {
			s = mid1 + 1;
			r = mid2 - 1;
		}
	}
	return -1;
}

int main()
{
	int s, e, ans, key;

	int arr[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	s= 0;
	e = 9;

	key = 15;
	ans = ternarySearch(s, e, key, arr);

	cout << "Index of "<<key<<" is " << ans << endl;

	key = 100;

	ans = ternarySearch(s, e, key, arr);

	cout << "Index of "<<key<<" is " << ans;
}
