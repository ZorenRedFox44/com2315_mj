uimport java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese un numero entero: ");
        int entero = scanner.nextInt();

        System.out.print("Ingrese un numero flotante: ");
        float flotante = scanner.nextFloat();

        System.out.print("Ingrese un caracter: ");
        char caracter = scanner.next().charAt(0);

        scanner.nextLine(); // Consumir la nueva línea pendiente después de leer un char

        System.out.print("Ingrese una cadena de caracteres: ");
        String cadena = scanner.nextLine();
        
        // Ahora puedes usar las variables entero, flotante, caracter y cadena según sea necesario
    }
}
