// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	int a, b;
	scanf("%d%d", &a, &b);
	while (b != 0 && a != 0)

	{
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	printf("%d\n", a + b);

	system("pause");
	return 0;
}

