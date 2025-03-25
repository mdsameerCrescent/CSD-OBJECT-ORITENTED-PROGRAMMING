import java.util.Scanner;

 public class SwapNumbers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        
        System.out.print("Enter first number: ");
        int a = scan.nextInt();
        System.out.print("Enter second number: ");
        int b = scan.nextInt();

    
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After swapping (using temp variable): a = " + a + ", b = " + b);


        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("After swapping (without temp variable): a = " + a + ", b = " + b);

        scan.close();
    }
}