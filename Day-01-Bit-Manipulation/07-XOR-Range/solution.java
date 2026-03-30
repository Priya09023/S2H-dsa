import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt(), r = sc.nextInt(), res = 0;

        for (int i = l; i <= r; i++)
            res ^= i;

        System.out.print(res);
    }
}