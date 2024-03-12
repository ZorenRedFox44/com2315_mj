package pract.Tutorias;
import java.util.Scanner;

public class Tutorias
{
    public static void main(String[] ags) throws Exception
    {
        Scanner input= new Scanner(System.in); // poner informacion
        
        String nombre; //sirve para poner formas.
 
        System.out.print("Entre su nombre: ");//mostrar mensaje
        nombre = input.nextLine();//usamos input para guardar el nombre en la variable nombre.

        System. out. printf( "El nombre es: %s", nombre);// saludamosal usario.

        input.close(); //cerramos el imput.
        
    }
}