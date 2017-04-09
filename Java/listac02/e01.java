import java.util.Scanner;

/*
	1. Faça um programa que receba dois números e mostre qual deles é o maior.
 */

public class e01 {

	//Construtor
	private e01(){

		int num1 = 0;
		int num2 = 0;
	    Scanner teclado = new Scanner(System.in);

		System.out.print("Num1: ");
	    num1 = teclado.nextInt();

	    System.out.print("Num2: ");
	    num2 = teclado.nextInt();

	    if(num1>num2){
	    	System.out.println("Num1 > Num2");
	    } else {
	    	System.out.println("Num2 > Num1");
	    }

	}

    public static void main(String[] args) {
		
		e01 exercicio = new e01();

    }
    
}
