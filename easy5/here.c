#include <stdio.h>
#include <math.h>
//��1��1000��������ӡ����
int main()
{
	int x, y;
	
	for (x = 2;x <= 1000;x++)
	{
		int panbie = 1;
		for (y = 2;y <= sqrt(x);y++)
		{
			if (x % y == 0)
				panbie = -1;
		}
		if (panbie == 1)
			printf("%4d ", x);
	}
	return 0;
}