/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

/**
 *
 * @author hugon
 */
public class FatorialMain {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
        Fatorial f = new Fatorial();
        f.setValor(5);
        System.out.print(f.getFormula());
        System.out.println(f.getFatorial());
    }
    
}
