import java.util.Scanner;

public class A_Bit_ {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt(), ans = 0;
        String a="X++",b="++X",c="--X",d="X--";
        while (n > 0) {
            String s = cin.next();
            if (s==a || s==b)
                ans=ans+1;
            else if(s==c || s==d)
                ans=ans-1;
            n--;

        }
        System.out.println(ans);
    }
}