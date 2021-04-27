#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main(void){
	int r1, r2, r11, r22, r3, d, forcaA, forcaB, placarA, placarB;
	char timeA[600];
	char timeB[600];
	srand(time(NULL));
	printf("Insira nome do Time A\n");
	scanf("%s", timeA);
	printf("Insira forca do time A (0 a 16)\n");
	scanf("%d", &forcaA);
	
	printf("Insira nome do Time B\n");
	scanf("%s", timeB);
	printf("Insira forca do time B (0 a 16)\n");
	scanf("%d", &forcaB);
    r11 = rand()%(forcaA-forcaB + 1);
    r22 = rand()%(forcaB-forcaA + 1);
    r1 = rand()%(3);
    r2 = rand()%(3);
   
    r3 = rand()%6; //para haver uma chance de 16,6% dos empates serem 0 a 0
    
    if(r11<0){
    	r11 = 0;
	}
	else{
		r11 = r11;
	}
	
	if(r22<0){
		r22 = 0;
	}
    else{
    	r22 = r22;
	}
	
	placarA = r11 + r1/((r22+r2)/2);
	placarB = r22 + r2/((r2+r22)/2);
	
	
	if(placarA < 0) //linha analse
	{
	placarA = 0;
	}
	else {
		placarA = placarA;
	}
	
	if(placarB < 0)
	{
	placarB = 0;
	}
	else{
		placarB = placarB;
    } //linha analse
	
	
	if(placarA>placarB)
	{
		d = placarA - placarB;
	}
	else {
		d = placarB - placarA;
	}

	if (r3 = 0)
	{
		if (placarA == placarB)
		{
		printf("PLACAR: %s Zero x Zero %s", timeA, timeB);
		getch();
		system("pause");
		return 0;
		}
		else 
		{
		printf("PLACAR: %s %d x %d %s, saldo e de %d", timeA, placarA, placarB, timeB, d);
		getch();
		system("pause");	
		return 0;
		}
	}
	else
	{
	printf("PLACAR: %s %d x %d %s, saldo e de %d", timeA, placarA, placarB, timeB, d);
	getch();
	system("pause");
	return 0;
	}
}

