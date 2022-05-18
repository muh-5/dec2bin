#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	int dec;
	int bin[2048];
	int count = 0;
	if (argc != 2) {
		printf("input args in this way $ dec2bin 12");
		exit;
	}
	dec = atoi(argv[1]);
	while (dec > 0) {
		bin[count] = dec % 2;
		dec = dec /2;
		count++;
	}
	while (count > 0) {
		count--;
		printf("%d", bin[count]);
	}
	printf("\n");
}
