public class Box3D extends Box {

    public Box3D(double length,double breadth,double height){

        super(length,breadth,height);
    }

    public double volume(){

        return length * breadth * height;
    }

    public static void main(String[] args){

        Box3D obj = new Box3D(5,4,3);

        System.out.println("Area = " + obj.area());

        System.out.println("Volume = " + obj.volume());
    }
}