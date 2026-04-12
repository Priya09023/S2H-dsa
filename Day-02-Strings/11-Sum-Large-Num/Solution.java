import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();

        int i = s1.length() - 1;
        int j = s2.length() - 1;
        int carry = 0;

        StringBuilder result = new StringBuilder();

        while(i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if(i >= 0) sum += s1.charAt(i--) - '0';
            if(j >= 0) sum += s2.charAt(j--) - '0';

            result.append(sum % 10);
            carry = sum / 10;
        }

        result.reverse();

        String res = result.toString().replaceFirst("^0+(?!$)", "");
        System.out.print(res);
    }
}