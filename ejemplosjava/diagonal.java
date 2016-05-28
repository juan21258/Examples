
/**
 * Write a description of class diagonal here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class diagonal
{public boolean diagonal(int[][]matriz){
       int i=0;
       while(i<matriz.length){
           int j=0;
           while(j<matriz[0].length){
               if(i==j){
                   if(matriz[i][j]!=1){
                       return false;
                    }
                }else{
                    if(matriz[i][j]!=0){
                        return false;
                    }
                }
                j++;
            }
            i++;
        }
        return true;
  }    
}
