#include <stdio.h>

int main()
	{
		int sum;
		char letter; 
		float money;

		printf("Please enter an integer value ");
		scanf("%d", &sum );

		printf("Please enter a character ");
		/* the leading space before the %c ignores space characters in the input */
		scanf("  %c", &letter );

		printf("Please enter a float variable ");
		scanf("%f", &money );

		printf("\nThe variables you entered were\n");
		printf("value of sum = %d\n", sum );
		printf("value of letter = %c\n", letter );
		printf("value of money = %f\n", money );
		
		return 0;
	}
