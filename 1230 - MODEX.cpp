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
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        BigInteger a,b,x,y;
        int n,m,i,j;

        while(true)
        {
            n = sc.nextInt();
            if(n==0)break;
            for(i=1;i<=n;i++)
            {
                a = sc.nextBigInteger();
                b = sc.nextBigInteger();
                x = sc.nextBigInteger();

                y = a.modPow(b,x);
                System.out.println(y);

            }
        }


    }

}
