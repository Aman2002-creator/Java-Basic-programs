import java.util.Scanner;

class PrimeUpto_n
{
	public static void main(String args[])
	{
		int n,num,i,j,flag;

		Scanner s = new Scanner(System.in);
		System.out.println("Enter any number : "); 
		n=s.nextInt();
		/** 
		*The for loop checks if the numbers are prime 
		*between 2 and n. 
		*/
		for(i=2;i<=n;i++)
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
			}
		}
	}
}