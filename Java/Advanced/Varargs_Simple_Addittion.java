class Add
{
    void add(int ... val)
    {
    	int [] arr = val;
        int sum=0;
        for(int i=0;i<arr.length-1;i++)
        {
            System.out.print(arr[i]+"+");
            sum=sum+arr[i];
        }
        sum=sum+arr[arr.length-1];
        System.out.print(arr[arr.length-1]);
        System.out.println("="+sum);
    }

}
