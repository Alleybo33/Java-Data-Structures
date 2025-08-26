package pract1Stack;
import java.util.Scanner;
public class StackPmain {
	
	public static void main(String[] args) {
		
		StackP PrStack = new StackP(5);
		
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 0; i < 5; i++) {
			
			System.out.print("Enter the Stack value: ");
			int sVal = scanner.nextInt();
			PrStack.push(sVal);
		}
		
		while(!PrStack.isEmpty()) {
			
			System.out.print(PrStack.pop() + " ");
		}
		
		scanner.close();
	}
	
}
