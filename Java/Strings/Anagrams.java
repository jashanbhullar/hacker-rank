static boolean isAnagram(String a,String b)
	{
		char [] arr = null;
    
        a = a.toLowerCase();
		arr = a.toCharArray();
		Arrays.sort(arr);
		a = new String(arr);
	
        b = b.toLowerCase();
        arr = b.toCharArray();
		Arrays.sort(arr);
		b = new String(arr);
        
        return a.contentEquals(b);
}
