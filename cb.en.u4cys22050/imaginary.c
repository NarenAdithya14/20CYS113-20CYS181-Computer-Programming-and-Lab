#include <stdio.h>

struct complex {
	    double real,imag;
	        
};

int main() {
	    struct complex num1, num2, sum;

	        printf("Enter real and imaginary parts of first complex number:\n");
		    scanf("%lf %lf", &num1.real, &num1.imag);

		        printf("Enter real and imaginary parts of second complex number:\n");
			    scanf("%lf %lf", &num2.real, &num2.imag);

			        sum.real = num1.real + num2.real;
				    sum.imag = num1.imag + num2.imag;

				        printf("Sum = %.2lf + %.2lfi", sum.real, sum.imag);

					    return 0;
}
