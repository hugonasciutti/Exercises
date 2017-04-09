import java.util.Scanner;

/*
   2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
	  quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
	  número é inválido.
 */

public class e02 {

	public e02() {
		double n1=0;
		double calc=0;

		Scanner teclado = new Scanner(System.in);
		System.out.print("Insira n1: ");
		n1 = teclado.nextDouble();

		if(n1 > 0){
			calc = Math.sqrt(n1);
			System.out.println("Raiz quadrada de " + n1 + " é " + calc);
		} else {
			System.out.println("Número inválido");
		}
	}

	public static void main(String[] args){

		e02 exercicio2 = new e02();

	}

}