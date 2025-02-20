#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	double p2, p3;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		/* Прошу прощения за math и pow, но писать
		 * функцию с умножением/сложением в цикле
		 * мне было "влом", механика этих задач мне
		 * в целом понятна, на C когда-то давным-давно
		 * я писал.
		 */
		p2 = pow((double)i, 2.00);
		p3 = pow((double)i, 3.00);
		printf("%d %.0f %.0f\n", i, p2, p3);
	}

	return 0;
}