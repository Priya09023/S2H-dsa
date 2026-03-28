import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int start = sc.nextInt();
        int goal = sc.nextInt();
        int count = 0;

        int num = start ^ goal;

        while (num > 0) {
            if ((num & 1) == 1)
                count++;
            num = num >> 1;
        }

        System.out.print(count);
    }
}