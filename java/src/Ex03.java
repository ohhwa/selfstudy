class P {
	public int calc(int n) {
		if (n<=1) return n;
		return calc(n-1) + calc(n-2);
	}
}

class C extends P {
	public int calc(int n) {
		if (n<=1) return n;
		return calc(n-1) + calc(n-3);
	}
}
public class Ex03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P obj = new C();
			System.out.print(obj.calc(7));
	}
}
