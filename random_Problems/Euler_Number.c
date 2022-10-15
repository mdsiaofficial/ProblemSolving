#include 

/*
Write a program to compute the value of 
Euler's number e, that is used as the base of 
natural logarithms. Use the following 
formula. e=1+1/1! +1/2+1/3+...+1/n!
*/
int main()
{
	double term = 1.0;
	double sum = 1.0;
	int n = 0;

	while (term >= 0.0000001)
	{
		n++;
		term = term/n;
		sum = sum + term;
	}
	printf("\n Approximate value of e is: %lf ",sum);
	

	return 0;
}
