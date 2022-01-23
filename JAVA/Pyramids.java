package JAVA;

import java.util.Scanner;
/** 
public class Pyramids{
    public static void main(String[] args) {
        Scanner myobj = new Scanner(System.in);
        System.out.println("enter a number");

        int number = myobj.nextInt();
        for(int i=0;i<=number;i++){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
        myobj.close();
    }
}*/
public class Pyramids{
    public static void main(String[] args) {
        Scanner myobj = new Scanner (System.in);
        System.out.println("Enter a Number: ");

        int number = myobj.nextInt();
        int i=0;
        do{

            System.out.print("*");
            i++;
        }
        while(i<=number);
        myobj.close();

    }
}