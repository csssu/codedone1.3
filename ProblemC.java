
/*
	@author: Amir Aghazadeh
*/

import java.util.Scanner;

public class ProblemC {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		
		for(int i = 0; i < t; i++) {
			int n = scan.nextInt();
			
			System.out.println(n);
			
			for(int j = 1; j <= n; j++) {
				System.out.print(j + (j == n ? "" : " "));
			}
			
			System.out.println();
		}
	}
}
