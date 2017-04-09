import java.util.Scanner;

/*
   4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
       - O número digitado ao quadrado
       - A raiz quadrada do número digitado
 */

public class e04 {
	
	public e04() {
		System.out.print("Insira um número: ");
		Scanner teclado = new Scanner(System.in);
		double num = teclado.nextInt();

		if(num>0) {
			System.out.println("Número ao quadrado: " + num*num);
			System.out.println("A raiz quadrada: " + Math.sqrt(num));
		} 
	}

	public static void main(String[] args){
		e04 exercicio04 = new e04();
	}

}