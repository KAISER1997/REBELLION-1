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
 int a2=sc.nextInt();
 String ww=sc.next();
 int a[]=new int[111];
 int maxx=-1;
	  for(int e=0;e<a2;e++)
	  {
		  a[ww.charAt(e)]=a[ww.charAt(e)]+1;
		  
		  if(a[ww.charAt(e)]>=maxx)
			  maxx=a[ww.charAt(e)];
		  
	  }
	  int j=0;
	  for(int u=65;u<=90;u++)
	  {
		 if(a[u]==maxx) 
			 ++j;
		  
	  }
	  
	  
	  BigInteger ans;  
	 BigInteger a1 = BigInteger.valueOf(j);
 
	 BigInteger a3 =BigInteger.valueOf(a2);
	 ans=a1.pow(a2);
	 System.out.print(ans.mod( BigInteger.valueOf(1000000000+7)));
	 
	  
	  
	  
  
	  
	  
 
		
		
		
		
		
		
		
		
		
		
	}

}
