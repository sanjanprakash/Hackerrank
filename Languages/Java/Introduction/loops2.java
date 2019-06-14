import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int fac = 1, sum = a;
            for (int j = 0; j < n; j++) {
                sum += b*fac;
                System.out.printf("%d ",sum);
                fac *= 2;
            }
            System.out.println();
        }
        in.close();
    }
}

