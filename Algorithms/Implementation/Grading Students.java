/*
* Contributer : github.com/shikhar-07
* Email : shikharanandg@gmail.com
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class GradingStudents {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++){
            int grade = in.nextInt();
                if(grade < 38){
                    arr[i] = grade;
                }else{
                    int m = grade + 1;
                    int s = grade + 2;
                    if(m%5==0){
                        arr[i] = m;
                    }else if(s%5==0){
                        arr[i] = s;
                    }else{
                        arr[i] = grade;
                    }
                }
        }
        for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
    }
    
}
