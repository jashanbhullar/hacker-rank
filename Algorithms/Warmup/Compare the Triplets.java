/*
* Contributer : github.com/shikhar-07
* Email : shikharanandg@gmail.com
*/import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a0 = in.nextInt();
        int a1 = in.nextInt();
        int a2 = in.nextInt();
        int b0 = in.nextInt();
        int b1 = in.nextInt();
        int b2 = in.nextInt();
        int alicescore=0;
        int bobscore=0;
        if(a0>b0){
            alicescore++;
        }
        if(a1>b1){
            alicescore++;
        }
        if(a2>b2){
            alicescore++;
        }
         if(a0<b0){
            bobscore++;
        }
        if(a1<b1){
            bobscore++;
        }
        if(a2<b2){
            bobscore++;
        }
        System.out.println(alicescore+" "+bobscore);
    }
}
