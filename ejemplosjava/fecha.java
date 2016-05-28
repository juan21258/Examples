
/**
 * Write a description of class feccha here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class fecha
{public void fecha(int fecha){
        int dia=fecha%100;
            System.out.println("dia: " + "" + dia);
            int me=fecha%10000;
            int mes=me/100;
            System.out.println("mes: " + "" + mes);
            int año=fecha/10000;
            System.out.println("año: " + "" + año);
            fecha=fecha;
    }
}

