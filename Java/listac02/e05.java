import java.util.Scanner;

/*
   5. Faça um programa que receba um número inteiro e verifique se este número é par ou
      ímpar.
 */

public class e05 {

	public e05()
	{
		int num = 0;

		System.out.print("Insira um número: ");
		Scanner teclado = new Scanner(System.in);

		num = teclado.nextInt();

		if( num % 2 == 0 ) {
			System.out.println("Número par;");
		} else {
			System.out.println("Número ímpar;");
		}
	}
	
	public static void main(String[] args)
	{
		e05 exercicio05 = new e05();
	}

}