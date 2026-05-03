#include <stdio.h>

int main ()

{
	float yol;
	float zaman;
	float hiz;
	
	printf("gideceginiz mesafe : ");
	scanf("%f",&yol);
	printf("gitmek istediginiz sure : ");
	scanf("%f",&zaman);
	
	hiz=yol/zaman;
	printf("gitmeniz gereken hiz = %.2f KM",hiz);
	
	return 0;
	
	
}
