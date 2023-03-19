//package ProblemSolving;

import java.util.Scanner;

public class OddQuery {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for(int s =0; s<t; s++) {
            int n,q;
            n = sc.nextInt();
            q = sc.nextInt();
            int[] array = new int[n];
            String[] outputs = new String[q];

            for(int i=0; i<n; i++) {
                array[i] = sc.nextInt();
            }
            for(int i=0; i<q; i++) {
                String result = "YES";
                int l = sc.nextInt();
                int r = sc.nextInt();
                int k = sc.nextInt();

                int count =0;
                for(int j=0; j<n; j++) {
                    if(j>=(l-1) && j<=(r-1)) {
                        count+=k;
                    }else {
                        count+= array[j];
                    }
                }
                if(count%2==0) {
                    result = "NO";
                }
                System.out.println(result);

            }
        }
    }
}