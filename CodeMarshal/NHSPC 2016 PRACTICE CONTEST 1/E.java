import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <=n; i++){
            long x = sc.nextLong();
            int div = 0;
            for(int j = 1; j <= x; j++) {
                if(x % j == 0){
                    if(j%2!=0){
                        div = j;
                    }
                }
            }
            System.out.println("Case " + i + ": " + div);
        }
    }
}



