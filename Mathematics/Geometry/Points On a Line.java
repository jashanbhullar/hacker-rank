/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Set<Integer> setX = new HashSet<Integer>();
        Set<Integer> setY = new HashSet<Integer>();
        
        for (int j = 0; j < n; j ++) {
            setX.add(in.nextInt());
            setY.add(in.nextInt());
        }
        if (setX.size() == 1) {
            System.out.println("YES");
        }
        else if (setY.size() == 1 ) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
        }
