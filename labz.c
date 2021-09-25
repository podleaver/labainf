#include <stdio.h>
#define N 10
void zamena(int *a, int b)// Функция для перестановки элементов
{
	int i = 1;
	int tmp;
	for (i; i <= b; i++)
	{
		tmp = a[i-1];
		a[i-1]=a[N-i];
		a[N-i] = tmp;
		tmp = 0;
	}


}
int main()
{
	int a;
	int b;
	int t;
	 printf("VVedi a:");
    scanf_s("%d", &a);
    printf("VVedi b:");
    scanf_s("%d", &b);
	
	int mas[N] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < N; i++)
	{
		printf("%d", mas[i]);

	}
	printf("\n");
	zamena(mas,2);
	for (int i = 0; i < N; i++)
	{
		printf("%d", mas[i]);

	}
	printf("/0");
    if (a < b) { t = a; a = b; b = t; }
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    printf("%d", a);
	
	return 0;
}