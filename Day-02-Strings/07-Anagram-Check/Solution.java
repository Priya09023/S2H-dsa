import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();

        int[] freq = new int[26];

        for(char c : s1.toCharArray())
            freq[c - 'a']++;

        for(char c : s2.toCharArray())
            freq[c - 'a']--;

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                System.out.print("false");
                return;
            }
        }

        System.out.print("true");
    }
}