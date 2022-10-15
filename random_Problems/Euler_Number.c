#include<stdio.h>

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


// Explaination:
/* 
7.10 Write a program to compute the value of Euler's number e, that is used as the base of natural logarithms. Use the following formula. e=1+1/1! +1/2+1/3+...+1/n!

1. Write a program to compute the value of Euler’s number e, that is used as the base of natural...
1 answer below »
1. Write a program to compute the value of Euler’s number e, that is used as the base of
natural logarithms. Use the following formula

e = 1 + 1/1! + 1 /2! + 1 /3! + . . . . . + 1 /n!

Use a suitable loop construct. The loop must terminate when the difference between two

successive values of e is less than 0.00001.

2. Write programs to evaluate the following functions to 0.0001% accuracy.

(a) sinx = x – x3/3! + x5/5! – x7/7! + . . . . . .

(b) cosx = 1 – x2/2! + x4/4! – x6/6! + . . . . .

(c) SUM = 1 + (1/2)2 + (1/3)3 + (1/4)4 + … …

3. The present value (popularly known as book value) of an item is given by the relationship.

P = c (1–d)n

where c = original cost

d = rate of depreciation (per year)

n = number of years

p = present value after y years.

If P is considered the scrap value at the end of useful life of the item, write a program to compute the useful life in years given the original cost, depreciation rate, and the scrap value.

The program should request the user to input the data interactively.

*/