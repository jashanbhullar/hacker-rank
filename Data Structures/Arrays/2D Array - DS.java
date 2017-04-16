/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
  import java.io.*;
import java.util.*;

public class Solution { 

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int sum=0,temp=0; 
       int[][] arr = new int[6][6];
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          arr[arr_i][arr_j]=  s.nextInt();
       }
    }
        for(int arr_i = 0;arr_i < 4;arr_i++){
       for(int arr_j = 0;arr_j < 4;arr_j++){
       sum = arr[arr_i][arr_j]+arr[arr_i][arr_j+1]+arr[arr_i][arr_j+2]+arr[arr_i+1][arr_j+1]+ arr[arr_i+2][arr_j+2] +arr[arr_i+2][arr_j+1] +arr[arr_i+2][arr_j];
        if(arr_i==0 && arr_j==0)
        temp =sum;
           if (sum>temp)
           {temp=sum;}
       
       }}
       System.out.println(temp); 
    }
}
