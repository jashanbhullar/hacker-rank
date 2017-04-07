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
         BigInteger addition,multiplication;
       Scanner k=new Scanner(System.in);
       BigInteger A=k.nextBigInteger();
       BigInteger B=k.nextBigInteger() ;
       addition=A.add(B);
       multiplication=A.multiply(B);
       System.out.println(addition) ;
       System.out.println( multiplication) ;
    }
}
