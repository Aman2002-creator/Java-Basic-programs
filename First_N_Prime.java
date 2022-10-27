import java.util.Scanner;

class First_N_Prime
{
	public static void main(String args[])
	{
		int n,num,i=2,j,flag,count=0;

		Scanner s = new Scanner(System.in);
		System.out.println("Enter any number : "); 
		n=s.nextInt();
		//count is a variable to count no of prime numbers printed
		while(count<n)
		{
			num=i;
			flag=0;
			for(j=2;j<=num/2;j++)
			{
				if(num%j==0)
				{
					flag++;
					break;
				}
			}
	
			if(flag==0)
			{
				System.out.print(num+" ");
				count++;
			}
			i++;
		}	
	}
}