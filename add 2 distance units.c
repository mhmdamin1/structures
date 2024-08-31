// Mohamed Amin

#include <stdio.h>
#include <stdlib.h>

struct unit{
	int feet;
	float inch;
};
struct unit add (struct unit a,struct unit b)
{
	struct unit c;
	c.feet=a.feet+b.feet;
	c.inch=a.inch+b.inch;
	return c;
}

int main()
{
	struct unit sa,sb,sc;

	printf("Enter information for 1st distance\nEnter feet: ");
	scanf("%d",&sa.feet);
	printf("Enter inch:");
	scanf("%f",&sa.inch);

	printf("Enter information for 2st distance\nEnter feet: ");
	scanf("%d",&sb.feet);
	printf("Enter inch:");
	scanf("%f",&sb.inch);

	sc=add(sa,sb);
	printf("Sum of distances= %d  %.2f",sc.feet,sc.inch);
}

