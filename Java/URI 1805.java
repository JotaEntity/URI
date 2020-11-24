import java.util.Scanner;

public class URI_1805 {


    public static void main(String[] args) {

        long A, B, Final;

        Scanner ler = new Scanner(System.in);
        A = ler.nextLong();
        B = ler.nextLong();

        Final = ((A + B) * (B - A + 1)) / 2;
        System.out.println(Final);




    }
}
