public class Test {

    public static void main(String[] args) {

        System.out.println("Direct Object Calls:");

        Veena veena = new Veena();
        veena.play();

        Saxophone saxophone = new Saxophone();
        saxophone.play();

        System.out.println("\nUsing Interface Reference:");

        Playable p1 = new Veena();
        p1.play();

        Playable p2 = new Saxophone();
        p2.play();
    }
}
