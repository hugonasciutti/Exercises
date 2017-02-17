/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package idiomasistema;

/**
 *
 * @author hugon
 */
public class IdiomaSistema {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String idioma; 
        idioma = System.getProperty("user.language");
        System.out.println("O idioma do sistema é: " + idioma);
    }
    
}
