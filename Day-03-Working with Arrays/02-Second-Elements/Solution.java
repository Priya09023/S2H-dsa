import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        if(n < 2) {
            System.out.print("-1 -1");
            return;
        }

        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int smallest = Integer.MAX_VALUE, second_smallest = Integer.MAX_VALUE;
        int largest = Integer.MIN_VALUE, second_largest = Integer.MIN_VALUE;

        for(int i = 0; i < n; i++) {
            if(arr[i] < smallest) {
                second_smallest = smallest;
                smallest = arr[i];
            } else if(arr[i] > smallest && arr[i] < second_smallest) {
                second_smallest = arr[i];
            }

            if(arr[i] > largest) {
                second_largest = largest;
                largest = arr[i];
            } else if(arr[i] < largest && arr[i] > second_largest) {
                second_largest = arr[i];
            }
        }

        if(second_smallest == Integer.MAX_VALUE || second_largest == Integer.MIN_VALUE)
            System.out.print("-1 -1");
        else
            System.out.print(second_smallest + " " + second_largest);
    }
}