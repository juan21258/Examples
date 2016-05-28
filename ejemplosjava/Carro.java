
/**
 * Write a description of class Carro here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Carro
{
   private String marca;
   private String modelo;
   private String color;


public static void main(String[] args) {
String Color;
String Marca;
String Modelo;    
Carro carro = new Carro();
carro.setColor("");
carro.setMarca("");
carro.setModelo("");

System.out.println("Color : " + carro.getColor());
}

public String getMarca() {
return marca;
}

public void setMarca(String marca) {
this.marca = marca;
}

public String getModelo() {
return modelo;
}

public void setModelo(String modelo) {
this.modelo = modelo;
}

public String getColor() {
return color;
}

public void setColor(String color) {
this.color = color;
}

 public void parqueo(String[]args){
    String vehiculoin=marca + modelo + color;
    System.out.println("el carreo en el parqueadero es: "+ vehiculoin);
    }
 
  

}

