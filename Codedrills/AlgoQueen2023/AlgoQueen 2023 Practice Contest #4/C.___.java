import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        for (int i = 0; i < n; i++) {
            b[i] = scanner.nextInt();
        }
        int low = 0, high = (int) 1e6; // set the search range
        while (low < high) {
            int mid = (low + high) / 2;
            long revenue = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] >= mid) {
                    revenue += (long) (a[i] - mid) * b[i];
                }
            }
            if (revenue >= 0) {
                low = mid + 1; // increase the price
            } else {
                high = mid; // decrease the price
            }
        }
        System.out.println(low - 1); // the optimal price is low - 1
    }
}
