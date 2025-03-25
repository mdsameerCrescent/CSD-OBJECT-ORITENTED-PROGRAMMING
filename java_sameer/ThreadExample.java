class MyThread extends Thread {
    public void run() {
        try {
            System.out.println("Thread is running...");
            Thread.sleep(2000);
            System.out.println("Thread resumed after sleep.");
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted.");
        }
    }
}

public class ThreadExample {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}