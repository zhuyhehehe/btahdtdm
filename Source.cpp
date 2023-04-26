#include <stdio.h>
#include <math.h>
int main()
{
	//khai bao a, b, c, max
	int a, b, c, max;
	//nhap a
	printf("nhap a:");
	scanf("%d", &a);
	//nhap b
	printf("nhap b:");
	scanf("%d", &b);
	//nhap c
	printf("nhap c:");
	scanf("%d", &c);
	//gan max=a
	max = a;
	if (max < b)//neu max<b cap nhat max=b
	{
		max = b;
	}
	if (max < c)//neu max<c cap nhat max=c
	{
		max = c;
	}
	//in ket qua ra man hinh
	printf("\n So lon nhat trong 3 so %d, %1d, %d, la: %d", a, b, c, max);
}