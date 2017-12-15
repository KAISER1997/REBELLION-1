import java.math.*;
import java.util.*;
import java.io.*;

public class burn {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
  Scanner sc=new Scanner(System.in);
 BigInteger n=sc.nextBigInteger();
  int h=1;
  BigInteger a1,a2,bi2,z;
   
  a1=BigInteger.valueOf(2);
  z=(n.multiply(a1)).subtract(BigInteger.valueOf(1));
  bi2=BigInteger.valueOf(1000000007);
  a2 = (a1.modPow(n.subtract(BigInteger.valueOf(1)), bi2).add(a1.modPow(z, bi2) )).mod(bi2);
  System.out.println(a2);
	  
	  
  
	  
	  
 
		
		
		
		
		
		
		
		
		
		
	}

}
