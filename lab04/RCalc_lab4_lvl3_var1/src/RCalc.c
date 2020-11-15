#define R 4
#define PI 3.14

int main()
{
	char command = 'v';
	float result;
	switch(command) {
	case 'l': 2 * PI * R; // Длина окружности
			break;
	case 's': PI * R * R; // Площадь круга
			break;
	case 'v': (4.0 / 3.0 ) * PI * R * R * R; // Объем шара
			break;
	default: R;
	}
return 0;
}
