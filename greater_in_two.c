#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numberOne,numberTwo;
	scanf("%d%d",&numberOne,&numberTwo);
	if(numberTwo>numberOne)
		printf("second number is greatest\n");
	else
		printf("First number is greatest\n");
	return 0;
}