import java.util.Scanner;

public class loops_java{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int n=cin.nextInt();
        for(int i=1;i<=10;i++)
        {
            n++;
        }
        System.out.println(n);
    }
}