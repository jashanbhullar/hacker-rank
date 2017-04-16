/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
  import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
         Scanner s = new Scanner(System.in);
        int n, d;
    n=s.nextInt();
        d=s.nextInt();
	d=d%n;
    int[] a = new int[n];
    for(int i=0; i<n; i++)
        a[i]=s.nextInt();
    for(int i=d;i<n;i++)
       System.out.print(a[i]+" ");
    for(int i=0;i<d;i++)
       System.out.print(a[i]+" ");
    }
}
