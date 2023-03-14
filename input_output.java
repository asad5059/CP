import java.util.Scanner;

public class input_output {
    public static void main(String[] a) {

        Scanner cin = new Scanner(System.in);    //cin

        //integer input output

        int n;
        n=cin.nextInt();
        System.out.println(n);

        //String i/o

        String s;
        s=cin.next();   // next() -> cin 
        System.out.println(s);
        s=cin.next();   // next() -> cin 
        // s=s+cin.nextLine();       // nextLine() -> getline(cin,s)
        System.out.println(s); 
    }
}
