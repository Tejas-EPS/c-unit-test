#include <stdio.h>
#include "average.h"
#include "sumvalue.h"

int main()
{
	float array[] = {-1.0, 0.0, 1.0, 2.0, 3.0};
	float avg = average(array, 5);
	float sum = sumvalue(array, 5);
	printf("Average: %f\r\n", avg);
	printf("SUM: %f\r\n", sum);
	
	return 0;
}