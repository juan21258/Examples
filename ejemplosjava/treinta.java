
/**
 * Write a description of class treinta here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class treinta{

    public void treinta(int parcial1, int parcial2, int parcial3, int seguimiento){
        int promedioparcial1=parcial1*20;
        int promedioparcial2=parcial2*20;
        int promedioparcial3=parcial3*20;
        int promedioseguimiento=seguimiento*10;
        int sumadepromedios=promedioparcial1+promedioparcial2+promedioparcial3+promedioseguimiento;
        if(sumadepromedios>300){
            System.out.println("Tienes la materia ganada sin el 30% restante");
        }else{
            double promediofaltante=300-sumadepromedios;
            double notafaltante=promediofaltante/30;
            System.out.println("Tienes que sacar: " + "" + notafaltante + "" + "en el 30% restante para aprobar en 3,0");
        }
    }
}    