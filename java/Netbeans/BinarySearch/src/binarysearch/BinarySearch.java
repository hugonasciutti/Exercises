/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package binarysearch;

import java.util.Arrays;

/**
 *
 * @author hugon
 */
public class BinarySearch {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        // Busca binária
        int vetor[] = {3, 7, 6, 1, 9, 4, 2};
        int count = 0;
        
        int procurarValor = 1;
        int pos = Arrays.binarySearch(vetor, procurarValor);
        
        System.out.println(pos);
        if( pos < 0){
            System.out.println("Valor " + procurarValor + " não encontrado.");
        } else {
            System.out.println("Valor " + procurarValor + " encontrado na posição " + pos);
            for(int procurando: vetor){
                
                if(count == pos){
                    System.out.println(procurando +"<");                    
                }else {
                    System.out.println(procurando);
                }
                
                count++;
                
            }
        }
        
    }
    
}
