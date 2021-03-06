/**
 * @Problem		: Q15. last digit2
 * @Date		: 2015.12.25
 * @name 		: ngh
 * @description : what is last two digit in mult of numbers?
 * 				: merry christmas...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE* fp;
	int nCase;
	
	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		int n, i; 
		int temp, lastDigit = 1;

		fscanf(fp, "%d", &n);
		while (n--)
		{
			fscanf(fp, "%d", &temp);
			lastDigit = (lastDigit * (temp % 100)) % 100;
		}

		printf("%d\n", lastDigit);
	}

	fclose(fp);
	return 0;
}