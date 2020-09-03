import java.math.BigInteger;
import java.util.*;

/**
 *
 * @author PC-350_R-420
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here

        Scanner sc  = new Scanner(System.in);
        BigInteger sum = BigInteger.ZERO;
        while(true)
        {
            BigInteger a = sc.nextBigInteger();
            if(a.compareTo(BigInteger.valueOf(0))==0)
            {
                break;
            }
            else{
                sum = sum.add(a);
            }


        }
        System.out.println(""+sum);

    }

}
