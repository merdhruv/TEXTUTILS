package JAVA;
import java.util.Scanner;

public class Specific_error {
    public static void main(String[] args) {
        int [] a = new int [3];
        a[0] = 1;
        a[1] = 3;
        a[2] = 34;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the index:");
        int ind = sc.nextInt();

        System.out.println("Enter the number you want to divide with:");
        int number = sc.nextInt();

        try{
            System.out.println("The value of entered index is: "+ a[ind]);
            System.out.println("The value after division is: "+ a[ind]/number);
        }
        catch(ArithmeticException e){
            System.out.println("Arithmatic error has occured");
            System.out.println(e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index error occured");
            System.out.println(e);
        }
        catch(Exception e){
            System.out.println("Some error has occured");
            System.out.println(e);
        }
        sc.close();
    }
}
