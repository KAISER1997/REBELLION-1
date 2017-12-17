import java.math.*;
import java.util.*;
import java.io.*;

public class burn {
 
	static int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
  Scanner sc=new Scanner(System.in);
 int n=sc.nextInt();
  int h=1;
  BigInteger a1,a2,bi2,z,z1,z2,z3,p;
   a1=BigInteger.valueOf(1);
   a2=BigInteger.valueOf(1);
   z=BigInteger.valueOf(n);
   z1=BigInteger.valueOf(n-1);
   z2=BigInteger.valueOf(n-2);
   z3=BigInteger.valueOf(n-3);
   a1=a1.multiply(z1).multiply(z2).multiply(z3);
   a2=(a2.multiply(z).multiply(z1).multiply(z3)).divide(BigInteger.valueOf(gcd(n,n-3)));  
   
	if(n%2==1)
	{
		   
		
		p=z.multiply(z1).multiply(z2);	
	}
 
	else
	{
		if(a1.compareTo(a2)==1)
			p=a1;
		else
			p=a2;	
	}
	if(p.toString()!="0")
		System.out.print(p);
	else if(n!=1)
		System.out.print(n*(n-1));
	else
		System.out.print("1");
		
		
		
		
		
		
		
		
		
	}

}
