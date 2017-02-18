/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vetor01;

/**
 *
 * @author hugon
 */
public class Vetor01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        //Formas de declarar Array, Vetores;        
        ////IMPORTANTE/////////////////////
        //                              ///
        //  int[] num = {0,1,2,3,4,5};  ///
        //  int num[] = {0,1,2,3,4,5};  ///
        //  int num = new int[6];       ///
        //                              ///
        ///////////////////////////////////
        int n[] = {3,2,8,7,5,4};
        
        System.out.println("O vetor tem " + n.length + " posições");
        
        for(int i=0; i <= 5; i++){
            System.out.println("Na posição n[" + i + "] temos o valor " + n[i]);
        }
        
                
                
    }
    
}
