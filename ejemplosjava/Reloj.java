
/**
 * Write a description of class Reloj here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Reloj
{    
  int hora;
  int minutos;
  public Reloj(){
      hora=4;
      minutos=5;
      
  }
  public Reloj(int h, int m){
   int a= h;
   int b= m;
  this.hora=hora;
  this.minutos=minutos;  
  
  if(hora<h){
   System.out.println("-1");
  }
  if(hora==h){
   System.out.println("0");
  }
  if(hora>h){
   System.out.println("1");         
  }
  
  }
  public class Carro
{
   private String marca;
   private String modelo;
   private String color;


public  void main(String[] args) {
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
}



 
