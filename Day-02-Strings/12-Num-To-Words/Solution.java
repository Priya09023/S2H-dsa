import java.util.*;

class Main {
    static String[] ones = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ",
            "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ",
            "sixteen ", "seventeen ", "eighteen ", "nineteen "};

    static String[] tens = {"", "", "twenty ", "thirty ", "forty ", "fifty ",
            "sixty ", "seventy ", "eighty ", "ninety "};

    static String convert(int n) {
        String res = "";
        if(n >= 100) {
            res += ones[n/100] + "hundred ";
            n %= 100;
        }
        if(n >= 20) {
            res += tens[n/10];
            n %= 10;
        }
        if(n > 0) {
            res += ones[n];
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if(n == 0) {
            System.out.print("zero");
            return;
        }

        String result = "";

        if(n >= 10000000) {
            result += convert(n/10000000) + "crore ";
            n %= 10000000;
        }
        if(n >= 100000) {
            result += convert(n/100000) + "lakh ";
            n %= 100000;
        }
        if(n >= 1000) {
            result += convert(n/1000) + "thousand ";
            n %= 1000;
        }
        if(n > 0) {
            result += convert(n);
        }

        System.out.print(result.trim());
    }
}