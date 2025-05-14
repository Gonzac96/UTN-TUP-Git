#include <stdio.h>

int main() {
	
	int x = 1, acum = 0;
	
	printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\tAcumulado fila\n");
	printf("----------------------------------------------------------------------------\n");
	
	while(x < 12){
		int y = 1;
		while(y < 12){
			int mult = x * y;
			acum = acum + mult;
			if(y == 11){
				printf("%d", acum);
				break;
			}
			printf("%d\t", mult);
			y++;
		}
		printf("\n");
		x++;
	}
	
	return 0;
}

