#include <stdlib.h>
#include <stdio.h>

//          VETORES E MATRIZES
//              LISTA C04

/*
//1.

int main(){
    int A[6] = {1,0,5,-2,-5,7};
    int soma = A[0] + A[1] + A[5];
    printf("Soma: %d\n", soma);
    A[3] = 100;
    int i;
    for(i=0;i<6;i++){
        printf("A[%d]: %d\n", i, A[i]);
    }

    return 0;
}
*/

/*
//2.Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
int main(){

    int i;
    int x[6];
    for(i=0; i<6; i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<6; i++){
        printf("x[%d]: %d\n",i,x[i]);
    }
    return 0;
}
*/

/*
//3.
int main(){
    float x[10], k[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%f", &x[i]);
        k[i] = x[i] * x[i];
    }
    int j;
    for(j=0; j<10; j++){
        printf("x[%d]: %f \tk[%d]: %f\n", j, x[j], j, k[j]);
    }

    return 0;
}
*/

/*
//4.
int main(){
    int i,A[8];
    for(i=0; i<8; i++){
        printf("Insira A[%d]: ",i);
        scanf("%d", &A[i]);
    }
    int x,y;
    printf("Insira valor de X: ");
    scanf("%d",&x);
    printf("Insira valor de Y: ");
    scanf("%d", &y);

    int soma = A[x] + A[y];
    printf("Soma de A[%d]: %d + A[%d]: %d = %d", x, A[x], y, A[y], soma);
    return 0;
}
*/

/*
int main(){
//5
	int i,count=0,vet[10];

	for(i=0; i<10;i++){
		printf("vet[%d]: ",i);
		scanf("%d",&vet[i]);
		if(vet[i] % 2 == 0)
			count += 1;
	}

		printf("There are %d even numbers\n",count);


	return 0;
}
*/

/*
int main(){
	//6.
	int i,highest=0,lowest=0,vet[10];
	vet[0] = 0;

	for(i=0;i<10;i++){
		printf("vet[%d]:",i);
		scanf("%d",&vet[i]);
		if(i==0)
			continue;
		if(vet[i]<vet[i-1])
			lowest = vet[i];
		if(vet[i]>vet[i-1])
			highest = vet[i];
	}
	printf("lowest: %d\n",lowest);
	printf("highest: %d\n", highest);

	return 0;
}
*/


    //7
int main(){

    int i, vet[10], maior =0 , maior_p;


    for(i=0;i<10;i++){
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
        if(vet[i]>maior){
            maior = vet[i];
            maior_p = i;
        }
    }

    printf("maior: %d\nmaior_p: %d\n", maior, maior_p);





    return 0;
}

/*
int main(){
    //25
    int vet[100];
    vet[0]=0;
    int c=0, i=0;

    while(c<100){
        if(i%7==0){
            vet[c]=i;
            c++;
        }
        i++;

    }
    
    printf("%f\n", sizeof(vet)/4.0);
    for(i=0;i<100;i++){
        printf("vet[%d]: %d\n", i,vet[i]);
    }

	return 0;
}
*/


/*
IMPRIMINDO MATRIZ 3x3

int main(){
    int matriz[3][3] = { {1,2,3},
                         {4,5,6},
                         {7,8,9}};
    int i = 0,j=0;
    for(i=0;i<3;i++){
            printf("\n");
        for(j=0;j<3;j++)
            printf("%d", matriz[i][j]);
    }


    return 0;
}
*/




//27
/*
int main(){

    int i,j,count=0,pos[10],k=0,flag=0;
    int vet[10];

    for(i=0; i<10; i++){
        printf("vet[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    for(i=0; i<10; i++){
        flag = 0;
        count = 0;
        for(j=2; j<=(vet[i]/2); j++){
            if(vet[i] % j == 0){
                flag = 1;
            }
        }   
        if(vet[i] == 0 || vet[i] == 1)
            flag = 1;        
        if(flag == 0){
            printf("\nvet[%d]: %d\n", i, vet[i]);
        }
    }

    return 0;
}
*/

//34
/*
int main(){
    int i,j,k,n[10], flag=0;
    n[0]=0;
    for(i=0;i<10;i++){
        if(flag==1){ 
            flag = 0;
            i--;
        }else{               
            printf("Ni[%d]: ", i);
            scanf("%d",&n[i]);
        }
        for(j=0;j<i;j++){            
            if(n[j] == n[i]){
                printf("Ni[%d] == Ni[%d] insira outro valor\nNovo Ni[%d]: ",j,i,i);
                setbuf(stdin, NULL);
                scanf("%d", &n[i]);
                flag = 1;             
            }            
        }
      

    }

    return 0;
}
*/


//2. MATRIZES
//1.
/*
int main(){
    int A[4][4];
    int i,j;
    j=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Insira valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
         }


    return 0;

    }
}
*/


    /*
    int i,j, qtd= 0;
    float A[4][4];

    for(i=0; i<4; i++)
        for(j=0; j<4;j++){
            printf("Digite a pos %d,%d: ",i,j);
            scanf("%f",&A[i][j]);
            if(A[i][j] > 10)
                qtd++;
        }
    }
    */




















