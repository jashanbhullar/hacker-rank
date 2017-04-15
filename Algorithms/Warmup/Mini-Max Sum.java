/*
* Contributer : github.com/shikhar-07
* Email : shikharanandg@gmail.com
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
		int i;
		long sum = 0;
		long  max = 0;
		Long  min = (long) Math.pow(10,10);
		Scanner input = new Scanner(System.in);
		long [] array = new long[5];
		long [] temp = new long[5];
		for(i = 0 ; i < 5 ; i++)
		{
			array[i] = input.nextLong();
			sum+=array[i];
		}
		for(i = 0 ; i < 5 ; i++)
		{
			temp[i] = sum - array[i];
			
			if(temp[i] > max)
			{
				max = temp[i];
			}
			if(temp[i] < min)
			{
				min = temp[i];
			}
		}
		System.out.print(min);
		System.out.print(" ");
		System.out.print(max);
  }		
}	
		
		

	
