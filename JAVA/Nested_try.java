package JAVA;
import java.util.Scanner;

public class Nested_try {
    public static void main(String[] args) {
        int [] a = new int [3];
        a[0] = 1;
        a[1] = 3;
        a[2] = 34;
        Scanner x = new Scanner(System.in);
        boolean flag = true;
        while(flag){
            System.out.println("Enter the value of the index: ");
            int ind = x.nextInt();
            
            try{
                System.out.println("Nested try marre londe");
                flag = false;   
                try{
                    System.out.println(a[ind]);
                }
                catch(ArrayIndexOutOfBoundsException e){
                    System.out.println(e);
                    System.out.println("Exception in level 2");
                }   
            }
            catch(Exception e){
                System.out.println("Exception in level 1");
            }
        }
        x.close();

    }
}
