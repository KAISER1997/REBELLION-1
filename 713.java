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
  int n;
  n=sc.nextInt();
  for(int t=1;t<=n;t++)
  {
	BigInteger a1=sc.nextBigInteger();
	BigInteger a2=sc.nextBigInteger();
	String s1=a1.toString();
	String s2=a2.toString();
StringBuilder input1=new StringBuilder();
input1.append(s1);
StringBuilder input2=new StringBuilder();
input2.append(s2);
input1=input1.reverse();
input2=input2.reverse();
s1=input1.toString();
s2=input2.toString();
	 a1=new BigInteger(s1);
	 a2=new BigInteger(s2);
	 BigInteger s3;
	 a1=a1.add(a2);
	 StringBuilder input3=new StringBuilder() ;
	s3=new BigInteger( input3.append(a1.toString()).reverse().toString());
	 
	 System.out.println(s3);
	  
	  
	  
	  
	  
	  
	  
  }
		
		
		
		
		
		
		
		
		
		
	}

}
