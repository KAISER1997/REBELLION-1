import java.math.*;
import java.util.*;
import java.io.*;

  class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
  Scanner sc=new Scanner(System.in);
  while(1!=0)
	  
  {
	  
	 BigInteger a1=sc.nextBigInteger();
	 if(a1.toString()=="0")
		 break;
	BigInteger a2=a1.mod(new BigInteger("10"));
	
	 BigInteger a3=a1.divide(new BigInteger("10"));
	 BigInteger a4=a3.subtract(a2.multiply(new BigInteger("5")));
	// System.out.println(a4.mod(new BigInteger("17")));
	 if(a4.mod(new BigInteger("17")).toString()=="0")
	 System.out.println("1");
	 else 
     System.out.println("0");
	  
	  
	  
	  
	  
  }
	  
	  
 
		
		
		
		
		
		
		
		
		
		
	}

}
