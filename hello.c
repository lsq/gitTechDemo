/* author: lsq
 * example for test git tag
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i,array[20]={1,1};
	
	printf("hello, lsq!\n");

	for (i=2; i<20; i++)

		{

			array[i]=array[i-2]+array[i-1];

		}

	for (i = 0; i<20; i++)

		{

			printf("%d ",array[i]);

		}

	printf("\n");

	return 0;
}
