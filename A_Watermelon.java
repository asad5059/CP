import java.util.Scanner;

public class A_Watermelon 
{
    public static void main(String args[])
    {
        long n;
        Scanner cin = new Scanner(System.in);
        n=cin.nextLong();
        if(n==2)
        System.out.print("NO");
        else if(n%2==0)
        System.out.print("YES");
        else 
        System.out.print("NO");
    }
}