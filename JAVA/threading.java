package JAVA;
// Threading by extending Thread class
class MyThread1 extends Thread{
    
    public void run(){
        int i=0;
        while(i<4000){
            System.out.println("Thread1 is running");
            i++;
        }
    }
}
class MyThread2 extends Thread{
    
    public void run(){
        int i=0;
        while(i<4000){
            System.out.println("Thread2 is running");
            i++;
        }
    }
}
//Threading by implementing Runnable interface
class t1 implements Runnable{
    @Override
    public void run(){
        System.out.println("This Thread is Running");
    }
}

public class threading{
    public static void main(String[] args){
    /*MyThread1 t1 = new MyThread1();
    MyThread2 t2 = new MyThread2();
    t1.start();
    t2.start();
    */
    t1 obj1 = new t1();
    Thread t = new Thread(obj1);
    t.start();

    }

}
