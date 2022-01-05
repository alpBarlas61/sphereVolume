#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

To find the volume of sphere we are going to use formula which is simply ;

			V/=4/3*pi*(r*r*r)
			
In addtiton those spheres will be one of member of struct based code

*/

struct sphere
{
	char name[10] ;
	int radius;
};


float sphereVolume(int radius)
{
	float pi = 3.16,volume;
	
	volume = (4*pi*(radius*radius*radius))/3;
	
	return volume;
}


int main()
{
	char sphere_name[10];
	struct sphere sphere_1 ;
	
	printf("Enter the name of shphere :");
	scanf("%s",&sphere_name);
	
	strcpy(sphere_1.name,sphere_name);
	
	printf("Enter the radius size of sphere you want to calculate :");
	scanf("%d",&sphere_1.radius);
	
	printf("The volume of %s is %f",sphere_1.name, sphereVolume(sphere_1.radius));
	
	return 0;
}
