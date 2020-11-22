import java.util.*;

public class DecToBin{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int i=0,n=10;
		int a[] = new int[n];

		System.out.print("Enter Decimal Number:");
		int x = sc.nextInt();
		int d = x;

		while(d>0){
			a[i++] = d%2;
			d = d/2;
		}

		System.out.print("Binary Version of "+x+" is:");

		 for(int j = i-1;j >= 0;j--){
       		System.out.print(a[j]);
    	 }


	}
}