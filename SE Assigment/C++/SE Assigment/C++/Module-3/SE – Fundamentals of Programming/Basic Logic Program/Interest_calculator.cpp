#include <stdio.h>
int main()
{
	int p, t;
	float r, Ans;

	printf("\nSimple Interset Calculator");
	printf("\nEnter Principal Amount : ");
	scanf("%d", &p);
	printf("\nEnter Time of Interset (in Months) : ");
	scanf("%d", &t);
	printf("\nEnter Interest Rate : ");
	scanf("%f", &r);

	Ans = ((p * r * t) / 100);
	printf("\nTotal Amount Without Interset = %f", Ans);
	Ans = (p + ((p * r * t) / 100));
	printf("\nTotal Amount With Interest = %f", Ans);

	return 0;
}