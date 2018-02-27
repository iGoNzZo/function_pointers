/* 7.31.c program to compute addition, multiplication,
 * subtraction and division given values x and y
 * Steven Gonzalez 009387092	
 */
 
#include <stdio.h>

//function declaration 
void add();
void subtract();
void multiply();
void divide();

//main 
void main()	{
	//array of functions declaration
	void(*f[4])(double)= {add, subtract, multiply, divide};
	int option; //variable to hold the user option

	// promts for user option 
	printf("Options: \n");
	printf("\t1 - Add\n");
	printf("\t2 - Subtract\n");
	printf("\t3 - Multiply\n ");
	printf("\t4 - Divide\n");
	printf("\t5 - End the Program\n");
	scanf("%d", &option); // scans in the user option 
	option--;	// decrement counter for correct indexing
	
	//loop while option != exit
	while(option != 4)	{
		//call to opropriate function based on user option 
		(*f[option])(option);
		
		//promts for next user input 
		printf("Options: \n");
		printf("\t1 - Add\n");
		printf("\t2 - Subtract\n");
		printf("\t3 - Multiply\n ");
		printf("\t4 - Divide\n");
		printf("\t5 - End the Program\n");
		scanf("%d", &option); // scans in user option 
		option--; // decrement counter for correct indexing
	}
	//program end 
	printf("end program...goodbye!\n\n");
} // end main function  

//add function 
void add()	{
	int x, y; // variables for x and y values 
	printf("Enter x value: ");
	scanf("%d", &x); // scans user input for vairbale x 
	printf("Enter y value: ");
	scanf("%d", &y); // scans user input for variable y
	printf("Addition = %d\n", x + y); // calculate result and prints it 
} // end add function 

//substract function 
void subtract()	{
	int x, y;	 // variables for x and y values 
	printf("Enter x value: ");
	scanf("%d", &x); // scans user input for vairbale x 
	printf("Enter y value: ");
	scanf("%d", &y); // scans user input for variable y
	printf("Subtraction = %d\n", x - y); // calculate resut and print it 
} // end subtract function 

//subtract function 
void multiply()	{
	double x, y;	 // variables for x and y values 
	printf("Enter x value: ");
	scanf("%lf", &x); // scans user input for vairbale x 
	printf("Enter y value: ");
	scanf("%lf", &y); // scans user input for variable y
	printf("Multiplication = %.2lf\n", x * y); //calculate result and print it 
}// end subtract function 

//divide function 
void divide()	{
	double x, y; // variables for x and y values 	
	printf("Enter x value: ");
	scanf("%lff", &x); // scans user input for vairbale x 
	printf("Enter y value: ");
	scanf("%lf", &y); // scans user input for variable y
	printf("Division = %.2lf\n", x / y); // calculate result and print result
} // end divide function 
