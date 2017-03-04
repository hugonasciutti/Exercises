import java.util.Scanner;

/*
   6. Escreva um programa que, dados odis números inteiros, mostre na tela o maior deles,
      assim como a diferença existente entre ambos.
 */

public class e06 {

	public e06()
	{
		int num1 =0;
		int num2 =0;

		Scanner teclado = new Scanner(System.in);
		System.out.print("Insira um número: ");
		num1 = teclado.nextInt();

		System.out.print("Insira o segundo número: ");
		num2 = teclado.nextInt();

		if( num1>num2 ){
			System.out.println("num1>num2;");
			System.out.println("A diferença entre os dois números é " + Math.abs(num1 - num2));
		} else {
			System.out.print("num2>num1");
			System.out.println("A diferença entre os dois números é " + Math.abs(num2 - num1));
		}

	}

	public static void main(String[] args)
	{
		e06 exercicio06 = new e06();
	}

}