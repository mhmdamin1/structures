// Mohamed Amin

#include <stdio.h>
#include <stdlib.h>

struct Sdistances
{
	int feet;
	float inch;

}d,sum;
int main()
{
	int i;
	for (i = 0; i < 2; ++i)
	{
		printf("Enter information for %d.distance \n",i+1 );
		printf("Enter feet : " );

		scanf("%d",&d.feet);
		printf("Enter inch : " );

		scanf("%f",&d.inch);
		sum.feet += d.feet;
		sum.inch += d.inch;
	}
	if (sum.inch > d.feet)
	{
		sum.inch -= d.feet;
		++sum.feet;
	}
	printf("sum of distance = %d\'-%.1f\"",sum.feet,sum.inch );

return 0
}
