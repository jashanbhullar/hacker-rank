// I spent a lot of time figuring out what is what 
// if you are taking help from this 
// Please spare a moment to thank me 
// Jashan from your friendly neighbourhood 
// If know where i got the upper quote from you are Awesome 
// Have a good day!
class Display
{
	void display(double volume)
	{
		System.out.printf("%.3f\n",volume);
	}
}
class Calculate
{
	public Display output = new Display();
	public BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	int get_int_val()throws NumberFormatException,IOException
	{
		int var = Integer.parseInt(in.readLine());
		if(var<=0)
			throw new NumberFormatException("All the values must be positive");
		return var;
		
	}
	double get_double_val()throws NumberFormatException,IOException
	{
		double var = Double.parseDouble(in.readLine());
		if(var<=0)
			throw new NumberFormatException("All the values must be positive");
		return var;

	}
	static Calculate do_calc()
	{
		Calculate var = new Calculate();
		return var;
	}
	double get_volume(int a)
	{
		return a*a*a;
	}
	double get_volume(int l,int b,int h)
	{
		return l*b*h;
	}
	double get_volume(double r)
	{
		return 2*(Math.PI*r*r*r)/3;
	}
	double get_volume(double r,double h)
	{
		return Math.PI*r*r*h;
	}
	void display(double volume)
	{
		System.out.printf("%.3f",volume);
	}
}
