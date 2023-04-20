import java.util.Scanner;

class Main {

	static int count(int coins[], int n, int sum)
	{

		if (sum == 0)
			return 1 ;

		if (sum < 0)
			return 0 ;

		if (n <= 0)
			return 0 ;

		return count(coins, n - 1, sum)
			+ count(coins, n, sum - coins[n - 1]) ;
	}

	public static void main(String args[])
	{
	    Scanner sc = new Scanner(System.in) ;
	    int n = sc.nextInt() ;
	    int coins[] = new int[n] ;
	    
	    for(int i = 0 ; i < n ; i++)
	        coins[i] = sc.nextInt() ;
		
		int sum = sc.nextInt() ;

		System.out.println(count(coins, n, sum)) ;
	}
}
