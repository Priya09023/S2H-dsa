import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int total = 1 << n;

        for(int num = 0; num < total; num++) {
            System.out.print("[");
            for(int i = 0; i < n; i++) {
                if((num & (1 << i)) != 0)
                    System.out.print(arr[i] + " ");
            }
            System.out.print("] ");
        }
    }
}