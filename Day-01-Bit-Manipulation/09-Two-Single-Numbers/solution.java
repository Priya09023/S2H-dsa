import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int xr = 0;
        for(int num : arr)
            xr ^= num;

        int diff = xr & (-xr);
        int x = 0, y = 0;

        for(int num : arr) {
            if((num & diff) == 0)
                x ^= num;
            else
                y ^= num;
        }

        if(x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        System.out.print(x + " " + y);
    }
}