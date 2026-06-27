public class Outer {

    public void display() {
        System.out.println("Outer Class Display");
    }

    class Inner {

        public void display() {
            System.out.println("Inner Class Display");
        }
    }

    public static void main(String[] args) {

        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}