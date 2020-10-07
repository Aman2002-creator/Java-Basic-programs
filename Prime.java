import java.util.Scanner;

class Prime
{
	public static void main(String args[])
	{
		int num,i,flag = 0;

		Scanner s = new Scanner(System.in);
		System.out.println("Enter any no : ");
		num  = s.nextInt();
		/** 
		*for loop is used to check if a value 
		*is prime or not. It divides the value by numbers 
		*upto n/2. If value is divisible, it is not prime, else
		*it is a prime number. 
		*/
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag++;
				break;
			}
		}

		if(flag==0)
		{
			System.out.println(num+" is Prime.");
		}
		else if(flag == 1)
		{
			System.out.println(num+" is not a Prime Number");
		}
	}
}