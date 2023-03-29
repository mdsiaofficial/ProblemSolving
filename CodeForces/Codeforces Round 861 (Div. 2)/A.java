import java.util.*;

public class Main {
    public static int luckiness(int x) {
        String s = Integer.toString(x);
        int max_digit = 0, min_digit = 10;
        for (int i = 0; i < s.length(); i++) {
            int digit = s.charAt(i) - '0';
            max_digit = Math.max(max_digit, digit);
            min_digit = Math.min(min_digit, digit);
        }
        return max_digit - min_digit;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            int max_luckiness = -1, best_starship = 0;
            for (int x = l; x <= r; x++) {
                int x_luckiness = luckiness(x);
                if (x_luckiness > max_luckiness) {
                    max_luckiness = x_luckiness;
                    best_starship = x;
                }else if (x_luckiness == max_luckiness) {
                    best_starship = Math.max(best_starship, x);
                }
            }
            System.out.println(best_starship);
        }
        sc.close();
    }
}