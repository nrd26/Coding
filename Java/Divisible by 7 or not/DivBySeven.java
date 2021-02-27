import java.util.*;

public class DivBySeven{

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number to be checked:");
		int a = sc.nextInt();

		if (a%7==0) {
			System.out.println(a+" is divisible by 7");
		}
		else {
			System.out.println(a+" is not divisible by 7");
			int b= a+(7-(a%7));
			System.out.println("Next no divisible by 7: "+b);
		}	
	}
}