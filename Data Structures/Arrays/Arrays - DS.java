/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
  import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
         int n;
        n=s.nextInt();
   int[] arr = new int[n];
    for(int arr_i = 0;arr_i < n;arr_i++){
       arr[arr_i]=s.nextInt();
    }
    for(int arr_i = n-1;arr_i > -1;arr_i--){
      System.out.print(arr[arr_i]+" " );
    }
    }
}
