
/**
 * Write a description of class inverso here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import java.util.Scanner;
public class inverso
{
    public static void main (String[]args) {
        Scanner in = new Scanner (System.in);
        long numero, inverso=0, residuo;
        System.out.println("ingrese un numero:");
        numero = in.nextLong();
        residuo = numero;
        while (residuo>0) {
            inverso = inverso*10 + residuo % 10;
            residuo/= 10;
        }
        System.out.println("el numero es inverso:" + inverso); {
        if (numero==inverso)
        System.out.println("el numero es inverso");
        else 
            System.out.println("el numero no es inverso");
        }
    }                 
}
