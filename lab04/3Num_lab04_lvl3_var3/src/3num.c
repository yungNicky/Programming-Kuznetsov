int main()
{
	// k < m < n
	int k = 5;
	int m = 3;
	int n = 1;
	int temp;
	
	if (k > m) {
		temp = k;
		k = m;
		m = temp;
	}
	if (m > n) {
		temp = m;
		m = n;
		n = temp;
	}
	if (k > m) {
		temp = k;
		k = m;
		m = temp;
	}
return 0;
}
