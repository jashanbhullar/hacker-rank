
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.lang.reflect.*;


class Singleton{
    
    private static Singleton var=null;
    public String str;
    private Singleton(){}
    public static Singleton getSingleInstance()
        {
            if(var==null)
                var = new Singleton();
            return var;
        }
}
