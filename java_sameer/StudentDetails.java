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
