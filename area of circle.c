#include <stdio.h>


int main(void) {
	float radius;
	double area;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area = 3.14*radius*radius;
	printf(" \n Area of a circle = %.2lf",area);
	// your code goes here
	return 0;
}
