
/**
 * Write a description of class Ascendente here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class Ascendente {
    public static void main(String[] args){
        double[] numeros = new double[10];
        double aux;
        int i, j;
        Scanner in = new Scanner(System.in);
        for(i=0; i<numeros.length;i++)
        {
            System.out.println("ingrese el valor de el elemento" + i + ": ");
            numeros [i] = in.nextDouble();
        }
        for (i=1; i<numeros.length;i++)
        for(j=0; j<numeros.length-i; j++)
        if (numeros[j]>numeros[j+1])
        {
            aux = numeros[j];
            numeros [j] = numeros[j+1];
            numeros[j+1] = aux;
    }
    System.out.println("\nN\243meros ordenados:\n"); 
    for (i=0; i<numeros.length; i++)
    System.out.println("[" + i + "] : " + numeros[i]);
    System.out.println();
    }
}
    

   