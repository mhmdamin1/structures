// Mohamed Amin


#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#define area(r) (PI*(r)*(r))


int main()
{
	int radius;
	float area;
	printf("Enter area radius: ");

	scanf("%d",&radius);

	area = area(radius);

	printf("area = % .2f",area);

	return 0 ;
}
