import java.util.Scanner;

/*
   3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário,
      imprima o número ao quadrado.
 */

public class e03 {

	public e03() {
		double n1=0;
		double calc=0;

		System.out.print("Insira n1: ");
		Scanner teclado = new Scanner(System.in);
		n1 = teclado.nextDouble();

		if(n1>0){
			calc = Math.sqrt(n1);
			System.out.println("Raiz quadrada de " + n1 + " é " + calc);
		} else {
			calc = Math.pow(n1,2);
			System.out.println(n1 + " ao quadrado é: " + calc);
		}

	}

	public static void main(String[] args) {

		e03 exercicio3 = new e03();

	}

}