package pract1Stack;

public class StackP {
	private int maxSize;
	private int [] StackArr;
	private int top;
	
	public StackP(int s) {
		
		maxSize = s;
		StackArr = new int [maxSize];
		top = -1;
	}
	
	public void push(int s) {
		if (top == maxSize -1) {
			System.out.println("Stack is Full");
		}
		
		StackArr[++top]=s;
	}
	
	public int pop() {
		if(top == -1) {
			System.out.println("Stack is Empty");
			return -99;
		}
		else {
			return StackArr[top--];
		}
	}
	
	public int peek() {
		if(top == -1) {
			System.out.println("Stack is Empty");
			return -99;
		}
		else {
			return StackArr[top];
		}
	}
	
	public boolean isEmpty() {
		return (top == -1);
	}
	
	public boolean isFull() {
		return (top == maxSize -1);
	}
}
