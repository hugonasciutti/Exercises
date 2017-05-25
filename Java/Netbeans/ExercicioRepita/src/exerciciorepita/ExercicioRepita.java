/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciorepita;

import javax.swing.JOptionPane;

/**
 *
 * @author hugon
 */
public class ExercicioRepita {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float n;
        
        int qtdValores = 0;
        int impares = 0;
        int pares = 0;
        int maiorQueCem = 0;
        float soma = 0.0f;
        float media = 0.0f;
        
        
        
        
        do {
            n = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe um número:\n(Insira 0 para sair). "));
            
            if(n==0){
                media = soma / qtdValores;
                break;
            }
            
            //Somando para conseguir media;
            soma += n;
            
            //Verifica a quantidade de valores inseridos pelo usuário
            qtdValores++;
            
            // Verifica pares e impares
            if (n%2 == 0){
                pares++;
            } else {
                impares++;
            }
            
            //Verifica valores >100
            if (n > 100){
                maiorQueCem++;
            }
                       
        } while(n != 0);
            JOptionPane.showMessageDialog(null, "<html>Resultado<br>"
                                                + "<hr><br>"
                                                + "Total de Valores: " + qtdValores + "<br>"
                                                + "Total de Pares: " + pares + "<br>"
                                                + "Total de Ímpares: " + impares + "<br>"
                                                + "Acima de 100: " + maiorQueCem + "<br>"
                                                + "Média dos valores: " + media + "</html>", "Resultado Final", JOptionPane.INFORMATION_MESSAGE);
    }
    
}
