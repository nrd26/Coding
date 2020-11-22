import java.util.*;

public class PosNeg{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter number to be checked:");
		int a = sc.nextInt();

		if (a>0) {
			System.out.println(a+" is positive");
		}
		else if (a<0) {
			System.out.println(a+" is negative");
		}
		else System.out.println(a+" is 0");
	}
}