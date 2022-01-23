package JAVA;
import java.util.Scanner;

class MyException extends Exception{
    @Override
    public String toString(){
        return super.toString() + " I'm toString\n";
    }
    @Override
    public String getMessage(){
        return super.getMessage() + " I'm getMessage\n";
    }
}
public class ExceptionClass{
    public static void main(String[] args) {
        int a;
        Scanner s = new Scanner(System.in);
        a = s.nextInt();
        s.close();
        if(a<99){
            try{
                throw new MyException();
            }
            catch(Exception e){
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                e.printStackTrace();
            }
        }
        
    }
}

