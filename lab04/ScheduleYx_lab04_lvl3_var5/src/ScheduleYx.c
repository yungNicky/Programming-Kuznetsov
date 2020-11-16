#define X -0.5 // Число Х

int main()
{
	float y = 0;
	if (X <= -1) {
		y = -1 / X;
	}
	else if (X > -1 && X <= 1) {
		y = X * X;
	}
	else if (X > 1) {
		y = 1;
	}
	return 0;
}
