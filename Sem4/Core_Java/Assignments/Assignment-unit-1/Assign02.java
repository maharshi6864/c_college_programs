import java.util.Scanner;

public class Assign02 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter temperature in Fahrenheit: ");
    double fahrenheit = sc.nextDouble();

    double celsius = (fahrenheit - 32) / 1.8;
    System.out.println("Temperature in Celsius: " + celsius);
  }

}
