import java.util.*;
import java.lang.Math;

public class Quadratics{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter coefficient of x^2:");
		float a = sc.nextInt();
		System.out.print("Enter coefficient of x:");
		float b = sc.nextInt();
		System.out.print("Enter c:");
		float c = sc.nextInt();

		float dis=(b*b)-4*a*c;
		float cmn = (-b)/(2*a);

		if (dis<0) {
			double nsq = Math.sqrt(-dis);
			System.out.println("The equation has 0 real solutions.It's complex solutions are:");
			System.out.println("Solution 1:"+cmn+"+"+nsq+"i");
			System.out.println("Solution 2:"+cmn+"-"+nsq+"i");

		}
		else if (dis==0) {
			System.out.println("The equation has 1 real solution:"+cmn);
		}
		else if (dis>0) {
			double sq = Math.sqrt(dis);
			double sol1 = cmn+sq;
			double sol2 = cmn-sq;
			System.out.println("The equation has 2 real solutions");
			System.out.println("Solution 1 = "+sol1);
			System.out.println("Solution 2 = "+sol2);
		}
	}
}