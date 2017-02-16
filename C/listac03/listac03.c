#include <stdio.h>
#include <locale.h>

/*
int main(){
    //9
    setlocale(LC_ALL,"");
    int x;
    printf("Insira o valor de N: ");
    scanf("%d",&x);

    int i;
    for(i=1;i<=x;i++){
        printf("%d\n",2*i-1);
    }

    system("PAUSE");
    return 0;
}
*/

/*
int main(){
    //10
    setlocale(LC_ALL,"");
    int i, s;
    s=0;
    for(i=1;i<=50;i++){
        s = s + 2*i;
    }
    printf("%d",s);
}
*/

/*
int main(){
    //11

    int i,n;
    printf("Digite o valores positivos em de N: ");
    scanf("%d",&n);
    while(n<0){
        printf("Insira valores positivos: ");
        scanf("%d",&n);
    }
    for(i=0;i<=n;i++){
        printf("%d\n",i++);
    }


    return 0;
}
*/

/*
int main(){
    //12

    int i,n;
    printf("Digite o valores positivos em de N: ");
    scanf("%d",&n);
    while(n<0){
        printf("Insira valores positivos: ");
        scanf("%d",&n);
    }
    for(i=0;n>=i;n--){
        printf("%d\n",n);
    }


    return 0;
}
*/

/*
int main(){
  //13
  setlocale(LC_ALL,"");
  int n;
  printf("Insira um número positivo e par: ");
  scanf("%d",&n);
  while(n<=0 || n%2 != 0){
      printf("Insira um número 'positivo' e 'par': ");
      scanf("%d",&n);
  }

  int i;
  for(i=0;i<=n;i++){
      printf("%d°: %d\n",i+1,i*2);

  }

  return 0;
}
*/


/*
int main(){
  //14
  setlocale(LC_ALL,"");
  int n;
  printf("Insira um número positivo e par: ");
  scanf("%d",&n);
  while(n<=0 || n%2 != 0){
      printf("Insira um número 'positivo' e 'par': ");
      scanf("%d",&n);
  }
  int i = 0;
  while(i<=n || n>=0){
    i++;
    printf("%d°: %d\n",i+1,n);
    n = n-2;
  }
  return 0;
}
*/

/*
int main(){
  //15
  setlocale(LC_ALL,"");
  int n;
  printf("Insira um número positivo e ímpar: ");
  scanf("%d",&n);
  while(n<=0 || n%2 == 0){
    printf("Insira um número 'positivo' e 'ímpar': ");
    scanf("%d",&n);
  }

  int i, j;
  j = 0;
  for(i=1;i<=n;){
    j++;
    printf("%d°: %d\n",j,i);
    i = i + 2;
  }

  return 0;
}
*/

