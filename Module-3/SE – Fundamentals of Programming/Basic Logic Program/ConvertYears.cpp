#include <stdio.h>
int main()
{
	int days, years, weeks, months;

	printf("\nEnter Days : ");
	scanf("%d", &days);

	years = days / 365;
	months = days / 30;
	weeks = days / 7;

	printf("\nDays Convert into Year = %d", years);
	printf("\nDays Convert into Months = %d", months);
	printf("\nDays Convert into Weeks = %d", weeks);

	printf("\n\n\n\n\nEnter Years : ");
	scanf("%d", &years);

	months = years * 12;
	weeks = years * 52;
	days = years * 365;

	printf("\nYears Convert Into Months = %d", months);
	printf("\nYears Convert Into Weeks = %d", weeks);
	printf("\nYears Convert Into Days = %d", days);
}