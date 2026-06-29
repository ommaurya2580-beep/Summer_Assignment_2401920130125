public class Box {

    protected double length;
    protected double breadth;
    protected double height;

    public Box(double length,double breadth,double height){

        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public double area(){

        return length * breadth;
    }
}