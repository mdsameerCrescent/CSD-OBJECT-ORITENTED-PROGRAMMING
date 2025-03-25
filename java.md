Sure! Here’s the content in Markdown format:

```markdown
# Java Programs Overview

## Program 9: Check if a number is even or odd

**Aim:**  
Write a basic Java program to print whether the given number is even or odd.

**Algorithm:**
1. Take an input number.
2. Check if `number % 2 == 0`.
   - If true, print “Even”.
   - Else, print “Odd”.

**Program:**
```java
import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        if (num % 2 == 0)
            System.out.println(num + " is Even");
        else
            System.out.println(num + " is Odd");
        sc.close();
    }
}
```

**Result:**  
If input = 4 → Output: “4 is Even”  
If input = 7 → Output: “7 is Odd”

---

## Program 10: Swap two numbers with and without a temporary variable

**Aim:**  
Write a basic Java program to swap two numbers with and without using a temporary variable.

**Algorithm:**

**Using a temporary variable:**
1. Store `a` in a temporary variable.
2. Assign `b` to `a`.
3. Assign the temporary variable to `b`.

**Without a temporary variable:**
1. Use arithmetic operations (addition and subtraction).

**Program:**
```java
import java.util.Scanner;

public class SwapNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input
        System.out.print("Enter first number: ");
        int a = sc.nextInt();
        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        // Using temporary variable
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After swapping (using temp variable): a = " + a + ", b = " + b);

        // Without using a temporary variable
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("After swapping (without temp variable): a = " + a + ", b = " + b);

        sc.close();
    }
}
```

**Result:**  
If input = 5, 8 → Output:  
After swapping (using temp variable): a = 8, b = 5  
After swapping (without temp variable): a = 5, b = 8

---

## Program 11: Display student details using classes and objects

**Aim:**  
Write a Java program to display student details using classes and objects.

**Algorithm:**
1. Create a `Student` class with name, roll number, and marks as attributes.
2. Create a method to display details.
3. Use the main method to create an object and call the display method.

**Program:**
```java
class Student {
    String name;
    int rollNo;
    double marks;

    // Constructor
    Student(String n, int r, double m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void display() {
        System.out.println("Student Name: " + name);
        System.out.println("Roll Number: " + rollNo);
        System.out.println("Marks: " + marks);
    }
}

public class StudentDetails {
    public static void main(String[] args) {
        Student s1 = new Student("Sameer", 101, 92.5);
        s1.display();
    }
}
```

**Result:**  
Student Name: Sameer  
Roll Number: 101  
Marks: 92.5

---

## Program 12: Display family tree using hierarchical inheritance

**Aim:**  
Write a Java program to display a family tree using hierarchical inheritance.

**Algorithm:**
1. Create a `GrandParent` class with a method to display details.
2. Create `Parent` and `Child` classes that inherit `GrandParent`.
3. Create objects of `Parent` and `Child` classes and call methods.

**Program:**
```java
class GrandParent {
    void display() {
        System.out.println("I am the Grandparent");
    }
}

class Parent extends GrandParent {
    void show() {
        System.out.println("I am the Parent");
    }
}

class Child extends GrandParent {
    void reveal() {
        System.out.println("I am the Child");
    }
}

public class FamilyTree {
    public static void main(String[] args) {
        Parent p = new Parent();
        Child c = new Child();
        
        p.display();
        p.show();
        
        c.display();
        c.reveal();
    }
}
```

**Result:**  
I am the Grandparent  
I am the Parent  
I am the Grandparent  
I am the Child

---

## Program 13: Implement threading to start, sleep, and resume a process

**Aim:**  
Write a Java program implementing threading to make the process start, sleep, and resume.

**Algorithm:**
1. Create a class extending `Thread`.
2. Implement `run()` method with `sleep()`.
3. Start the thread and handle sleep using try-catch.

**Program:**
```java
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
```

**Result:**  
Thread is running...  
(Thread sleeps for 2 seconds)  
Thread resumed after sleep.

---

## Program 14: Simple Java program using packages

**Aim:**  
Write a simple Java program using packages.

**Algorithm:**
1. Create a package.
2. Create a class inside the package.
3. Use the package in the main program.

**Program:**
```java
package mypackage;

public class Hello {
    public void show() {
        System.out.println("Hello from package!");
    }
}
```

**Main program:**
```java
import mypackage.Hello;

public class PackageDemo {
    public static void main(String[] args) {
        Hello obj = new Hello();
        obj.show();
    }
}
```

**Result:**  
Hello from package!

---

## Program 15: Exception handling for divide by zero

**Aim:**  
Write a Java program using try-catch, handling divide-by-zero exception.

**Algorithm:**
1. Take two numbers as input.
2. Try division. If denominator is zero, catch exception.

**Program:**
```java
import java.util.Scanner;

public class ExceptionHandling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter numerator: ");
        int num = sc.nextInt();
        System.out.print("Enter denominator: ");
        int den = sc.nextInt();

        try {
            int result = num / den;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        }
        sc.close();
    }
}
```

**Result:**  
Enter numerator: 10  
Enter denominator: 0  
Error: Division by zero is not allowed.

---

## Program 16: Read and write a file

**Aim:**  
Write a Java program to read and write a file.

**Program:**
```java
import java.io.*;

public class FileReadWrite {
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("test.txt");
        fw.write("Hello, File Handling!");
        fw.close();

        FileReader fr = new FileReader("test.txt");
        int ch;
        while ((ch = fr.read()) != -1)
            System.out.print((char) ch);
        fr.close();
    }
}
```

**Result:**  
Hello, File Handling!
```

Feel free to use or modify this as needed!
