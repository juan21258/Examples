
/**
 * Write a description of class d here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;

public class Sumatoria
{
   public static void main (String[] args) {
       double numero, mayor=0, menor=0, suma=0, promedio;
       int i, n, posicion_menor=1, posicion_mayor=1;
       Scanner in = new Scanner(System.in);
       System.out.println("ingrese el numero de elementos (n):");
       n = Integer.parseInt(in.nextLine());
       for(i=1; i<=n;i++) {
           System.out.println("ingrese el valor del elemento" + i +":");
           numero = Double.parseDouble(in.nextLine());
           if (i==1||numero<menor) {
               menor = numero;
               posicion_menor = i;
            }
            if (i==1|| numero>mayor) {
                mayor= numero;
                posicion_mayor = 1;
            }
            suma+= numero;
        }
        promedio = suma/n;
        System.out.println();
        System.out.println("suma : "+suma);
    }
}