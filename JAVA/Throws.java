package JAVA;
class NegativeRadiusException extends Exception{
    @Override
    public String toString(){
        return "Radius can't be negative";
    }
    @Override
    public String getMessage(){
        return "Radius can't be negative because of";
    }
}

public class Throws {
    public static int divide (int a,int b) throws ArithmeticException{
        if(b==0){
            throw new ArithmeticException();
        }
        int c = a/b;
        return c;
    }
    public static double area (double r) throws NegativeRadiusException{
        if(r<0){
            throw new NegativeRadiusException();
        }
        double result = Math.PI*r*r;
        return result;
    }
    public static void main(String[] args) {
        try{
            int c = divide(6,2);
            System.out.println(c);
            double ar = area(-3);
            System.out.println(ar);
        }
        catch(NegativeRadiusException e){
            System.out.println(e);
            

        }
    }
}
