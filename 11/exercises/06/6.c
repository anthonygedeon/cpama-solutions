void find_two_largest(int a[], int n, int* largest, int* second_largest) {
	int large = a[0];
	largest = &a[0];
	for (int i = 0; i < n; i++) {
		if (large < a[i]) {
			large = a[i];
			largest = &a[i];
		}
	}
	*largest = 0;

	second_largest = &a[0];
	for (int i = 0; i < n; i++) {
		if (*second_largest < a[i]) {
			second_largest = &a[i];
		}
	}

	*largest = large;
}

// { 100, 3, 99, 81, 42, 191 }
// find the first biggest:  a[5]
// find the second biggest: a[0]
