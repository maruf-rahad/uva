import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author DOLPHIN
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);

        BigInteger a,b,n,m,x,y,z;
        int t,i;

        t = sc.nextInt();
        i = 1;

        while(i<=t)
        {

            a = sc.nextBigInteger();
            String s = sc.next();
            b = sc.nextBigInteger();

            x = a.gcd(b);
            y = a.divide(x);
            z = b.divide(x);
            System.out.println(""+y+" / "+z);

            i++;
        }





        // TODO code application logic here
    }

}
