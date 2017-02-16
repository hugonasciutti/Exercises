#include <stdio.h>

	struct aluno
	{
		char nome[50];
		float nota;
	};

int main(){

	//valor da bolsa R$900,00
	//X número de bolsas para ser distribuído para N alunos candidatos. 
	//Tem que ser maior que a média dos N candidatos; (N>media);
	//Pode sobrar bolsas

	int i=0, j=0, N=0, X=0;
	float media=0;
	//N número de candidatos
	scanf("%d", &N);
	struct aluno alunos[N];
	struct aluno tmp[N];
	float sum=0;
	for(i=0; i<N; i++){
		scanf("%s", alunos[i].nome);
		scanf("%f", &alunos[i].nota);	
		sum += alunos[i].nota;
	}
	int bolsas=0;
	scanf("%d", &bolsas); // Número de bolsas a serem distruídas.
	//Descobrindo média das notas
	media = sum/N;
	printf("MEDIA = %.2f\n", media);
	int k=0;
	for(j=0; j<N; j++){
		for(k=0; k<N; k++){//Organizando alunos por nota.
				if(alunos[j].nota > alunos[k].nota){
					tmp[k] = alunos[j];
					alunos[j] = alunos[k];
					alunos[k] = tmp[k];
				}
			}
	}
	for(j=0; j<N; j++){ //Descobrindo alunos aprovados
		if(alunos[j].nota > media && bolsas > 0){
			printf("%s\n", alunos[j].nome);
			bolsas--;
		}
		
	}
	printf("SOBROU: %d BOLSA(S)\n", bolsas);


	return 0;
}