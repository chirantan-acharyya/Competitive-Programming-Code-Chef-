/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/LUCKFOUR
*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static int four(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(n%10==4)
          return 1+four(n/10);
        else 
          return four(n/10);
    }
}
	public static void main (String[] args) throws java.lang.Exception
	{
	   Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t>=1)
	{
	    int n=sc.nextInt();
	    System.out.println(four(n));
	    t--;
	}

    }
}
