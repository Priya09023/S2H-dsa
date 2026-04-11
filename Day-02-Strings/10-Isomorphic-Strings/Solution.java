import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();

        int[] map1 = new int[256];
        int[] map2 = new int[256];

        for(int i = 0; i < s1.length(); i++) {
            char a = s1.charAt(i);
            char b = s2.charAt(i);

            if(map1[a] == 0 && map2[b] == 0) {
                map1[a] = b;
                map2[b] = a;
            } else {
                if(map1[a] != b) {
                    System.out.print("false");
                    return;
                }
            }
        }

        System.out.print("true");
    }
}