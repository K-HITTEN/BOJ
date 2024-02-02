import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		Deque <Integer> queue = new ArrayDeque<>();
		for(int i = 1; i <= N; i++) {
			queue.offer(i);
		}
		while(queue.size() != 1) {
			queue.poll();
			if(queue.size() == 1) break;
			queue.offer(queue.poll());
		}
		System.out.println(queue.poll());
	}

}