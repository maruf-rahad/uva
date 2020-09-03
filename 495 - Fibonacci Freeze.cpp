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
        BigInteger a,b,sum;
        int x,y,i;
         sum = BigInteger.ZERO;
         a = BigInteger.ONE;
               b = a;

        while(sc.hasNext())
        {
            x = sc.nextInt();
            a = BigInteger.ONE;
            b = a;
            sum = BigInteger.ZERO;
            if(x==0)
            {
                System.out.println("The Fibonacci number for "+0+" is "+0);
            }
            else if(x==1)
            {
                System.out.println("The Fibonacci number for "+1+" is "+1);
            }
            else if(x==2)
            {
                System.out.println("The Fibonacci number for "+2+" is "+1);
            }
            else
            {

            for(i=1;i<=x-2;i++)
            {
                sum = a.add(b);
                a = b;
                b = sum;
            }
            System.out.println("The Fibonacci number for "+x+" is "+sum);

            }

        }


    }

}
