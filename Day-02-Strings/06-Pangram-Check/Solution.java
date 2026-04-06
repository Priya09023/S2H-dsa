import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().toLowerCase();

        boolean[] freq = new boolean[26];

        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(Character.isLetter(c)) {
                freq[c - 'a'] = true;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(!freq[i]) {
                System.out.print("false");
                return;
            }
        }

        System.out.print("true");
    }
}