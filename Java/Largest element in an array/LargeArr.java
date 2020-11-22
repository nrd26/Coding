import java.util.*;

public class LargeArr{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = 10;
		int a[] = new int[n];
		int i;
		System.out.println("Enter the elements of the array:");
		
		for (i=0;i<n;i++) {
			a[i] = sc.nextInt();
		}

		
/*Note that you can just use only the array initialisation loop and check for 
the condition there while each element is being inintialised by initialising x=0 
before the loop. But then you wouldn't be able to check for the condition 
if the array was full of negative numbers */


		int x = a[0];

		for (i=0;i<n;i++) {
			if (a[i]<x) {
				continue;
			}
			else {
				x = a[i];
			}
		}

		System.out.println("The largest element of the array is:"+x);

	}
}
