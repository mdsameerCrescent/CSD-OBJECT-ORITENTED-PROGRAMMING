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