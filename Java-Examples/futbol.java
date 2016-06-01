
/**
 * Write a description of class futbol here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

public class futbol
{
   public void fd(int []arr){
       int i=0;
       while(i<arr.length){
           int j=0;
           while(j<arr.length && j!=i){
               System.out.println("El enfrentamiento se da entre  " + arr[i] + " y " + arr[j]);
               j++;
            }
            i++;
        }
   }
}