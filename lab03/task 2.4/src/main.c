int main() 
{
#define uah 500 // 500 гривен (сумма)
	const float rub = 0.36; // 1 Рубль = 0.36 гривны
	const float usd = 28.38; // 1 Доллар = 28.38 гривны 
	const float eur = 33.24; // 1 Евро = 33.24 гривны
	float uah_rub = uah / rub; // Гривны в рублях
	float uah_usd = uah / usd; // Гривны в долларах
	float uah_eur = uah / eur; // Гривны в евро
	return 0;
}
