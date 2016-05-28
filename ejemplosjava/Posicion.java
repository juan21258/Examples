
/**
 * Write a description of class Futbol here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

 import java.util.Scanner;
public class Posicion{
    public static void main(String[] ar) {
        Scanner teclado=new Scanner(System.in);
        String cad1;
        String cad2;
        System.out.print("Ingrese la primer cadena:");
        cad1=teclado.nextLine();
        System.out.print("Ingrese la segunda cadena:");
        cad2=teclado.nextLine();
        if (cad1.equals(cad2)==true) {
            System.out.println(cad1+" es exactamente igual a "+cad2);
        } else {
            System.out.println(cad1+" no es exactamente igual a "+cad2);        
        }
        if (cad1.equalsIgnoreCase(cad2)==true) {
            System.out.println(cad1+" es igual a "+cad2+" sin tener en cuenta mayúsculas/minúsculas");
        } else {
            System.out.println(cad1+" no es igual a "+cad2+" sin tener en cuenta mayúsculas/minúsculas");        
        }
        if (cad1.compareTo(cad2)==0) {
            System.out.println(cad1+" es exactamente igual a "+cad2);
        } else {
            if (cad1.compareTo(cad2)>0) {
                System.out.println(cad1+ " es mayor alfabéticamente que "+cad2);
            } else {
                System.out.println(cad2+ " es mayor alfabéticamente que "+cad1);            
            }
        }        
    }
}
