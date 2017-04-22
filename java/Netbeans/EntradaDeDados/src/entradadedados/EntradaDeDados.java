/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package entradadedados;

import java.util.Scanner;

/**
 *
 * @author hugon
 */
public class EntradaDeDados {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado = new Scanner(System.in);
        String nome = teclado.nextLine();
        
        System.out.println("O seu nome é: " + nome);
        
    }
    
}
