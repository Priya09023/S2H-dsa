import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i = sc.nextInt();

        if ((n & (1 << i)) != 0)
            System.out.println("True");
        else
            System.out.println("False");
    }
}