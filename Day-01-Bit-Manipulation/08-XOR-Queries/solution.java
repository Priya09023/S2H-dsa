import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int q = sc.nextInt();
        while(q-- > 0) {
            int l = sc.nextInt(), r = sc.nextInt(), res = 0;

            for(int i = l; i <= r; i++)
                res ^= arr[i];

            System.out.print(res + " ");
        }
    }
}