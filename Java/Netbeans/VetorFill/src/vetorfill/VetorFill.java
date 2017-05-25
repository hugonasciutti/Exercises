/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vetorfill;

import java.util.Arrays;

/**
 *
 * @author hugon
 */
public class VetorFill {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
                
        int vetor[] = new int[20];
        
        //Preenchendo todas as posições com 0(zero)
        Arrays.fill(vetor, 0);
        
        for(int valor: vetor){
            System.out.print(valor + " ");
        }
        System.out.println("");
        
        
    }
    
}
