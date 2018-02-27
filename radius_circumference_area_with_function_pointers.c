/* 7.30.c prints the area or circumferance or volume for 
 * the given radius 
 * 
 * Steven Gonzalez 009387092 Hw3
 */
#include <stdio.h>
#include <math.h>

//function declarations 
void circumference(double r);
void area(double r);
void volume(double r);

//global variable declaration 
float pI = 3.141593;

//main function 
void main()	{
	//array of functions declaration 
	void(*f[3])(double) = {circumference, area, volume};
	
	//variables to hold radius and option 
	double radius;
	int option; 

	//prompts for user optionn 
	printf("Options: \n");
	printf("\t1 - Calclulate Circumference\n");
	printf("\t2 - Calculate Area\n");
	printf("\t3 - Calculate Volume\n ");
	printf("\t4 - End the Program\n");
	scanf("%d", &option); // read in the option
	option--;	// decrement counter for corrent index
	
	//while to proceed while option != exit 
	while(option != 3)	{
		printf("Enter the radius: ");
		scanf("%lf", &radius);
		//read in raduis from user promt 
	
		//call to appropriate function of function array 
		(*f[option])(radius);
		
		//promts to take in next input 
		printf("Options: \n");
		printf("\t1 - Calclulate Circumference\n");
		printf("\t2 - Calculate Area\n");
		printf("\t3 - Calculate Volume\n ");
		printf("\t4 - End the Program\n");
		scanf("%d", &option); // read in option 
		option--;	// decrement counter for current index 
	}
	printf("end program...goodbye!\n\n");
} // end main 

//circumference function, prints the function for the given radius 
void circumference(double r)	{
	printf("Circumference = %lf\n", 2 * pI * r);
}// end circumference function 

//area function, prints the area for the given radius 
void area(double r)	{
	printf("Area = %lf\n", pI * pow(r, 2));
}//end area function 

//volume function, prints the volume for the given radius
void volume(double r)	{
	printf("Volume = %lf\n", (4/3) * pI * pow(r, 3));
}//end volume function 
