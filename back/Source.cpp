#include<stdio.h>
int X[10], P[11];
void afis()
{
	for (int i = 1; i <= 9; i++)
		printf("%d  ", X[i]);
	printf("\n");
}
int ok(int k)
{
	if (k == 9) if (X[8] + X[9] != X[1] + X[2]) return 0;
	else return 1;
	if (k>3 && k % 2 == 0)
	if (X[k - 2] + X[k - 1] + X[k] != X[1] + X[2]) return 0;
	return 1;
}
void back(int k)
{
	for (int i = 1; i <= 9; i++)
	if (!P[i])
	{
		X[k] = i;
		P[i] = 1;
		if (ok(k))
 			if (k == 9) 
				afis();
		 else back(k + 1);
		P[i] = 0;
	}
}
void main()
{
	back(1);
}