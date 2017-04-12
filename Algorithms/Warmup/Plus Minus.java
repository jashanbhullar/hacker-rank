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
    double negative=0;
  double positive=0;
  double zero=0;  
  Scanner k=new Scanner(System.in);
  int n=k.nextInt();
  int [] arr=new int[n];
  for(int m:arr)
  {
       m=k.nextInt();
       if(m==0)
       {
             zero++;
        }
       else if(m<0)
      {
             negative++;
       }
      else if(m>0)
     {
           positive++;
      }
  }
  System.out.println(positive/n);
  System.out.println(negative/n);
  System.out.println(zero/n);
    }
}
