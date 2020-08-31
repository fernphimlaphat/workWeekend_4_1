#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main() {
	double n;
	int n1,s;
	char c;
	printf("Enter number 1 : ");
	scanf("%lf", &n);
	printf("Enter number 2 : ");
	scanf("%d",&n1);
	do
	{
		printf("\nselec 1 for +\n");
		printf("selec 2 for -\n");
		printf("selec 3 for x\n");
		printf("selec 4 for /\n");
		printf("\nSelect number : ");
		scanf("%d", &s);

		if (s == 1)
		{
			printf("%.2lf\n\n", n + n1);
		}

		else if (s == 2)
		{
			printf("%.2lf\n\n", n - n1);
		}

		else if (s == 3)
		{
			printf("%.2lf\n\n", n * n1);
		}

		else if (s == 4)
		{
			printf("%.2lf\n\n", n / n1);
		}
		else
		{
			printf("You not select number!\n\n");
		}


		printf("selec Y again\n");
		printf("selec N exit\n\n");
		scanf(" %c",&c);
		c = toupper(c);

	} while (c == 'Y' );
}