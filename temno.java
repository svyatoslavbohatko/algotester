import java.util.Scanner;

public class temno {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		float kimn = sc.nextFloat();
		float stud = sc.nextFloat();
		if ((kimn == 0) || (stud==0))
		{
			System.out.println("0");
		}
		else
		{
			double vidp1 = 1/(kimn);
			double vidp2 = 1/(stud);
			System.out.format("%.6f", vidp1*vidp2);
		}
		} 
		
}
