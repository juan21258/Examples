
/**
 * Write a description of class repetir here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class repetir
{
    public void repetir(char[]arr){
       int i=0;
              while(i<arr.length){
           int j=0;
           while(j<arr.length){
               System.out.println("palabra : " + arr[i] + " " + arr[j]);
               j++;
            }
            i++;
        }
    }
}
