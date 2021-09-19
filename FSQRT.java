/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FSQRT
*/


/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
	while(t>=1)
	{
	    int max=0;
	    int n=sc.nextInt();
	    for(int i=1;i*i<=n;i++)
	    {
	        max=i;
	    }
	   System.out.println(max);
	    t--;
	}
}
}
