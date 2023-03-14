import java.util.Scanner;

public class Areaa {
    static int x, y;

    static void setDim(int p, int q) {
        x = p;
        y = q;
    }

    static int getArea() {
        return x * y;
    }

    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int a, b;
        a = inp.nextInt();
        b = inp.nextInt();
        setDim(a, b);
        int ans;
        ans = getArea();
        System.out.println("Area is : " + ans);
    }
}