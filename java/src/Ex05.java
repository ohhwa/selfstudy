class Static {
	public int a = 20;
	static int b = 0;
}

public class Ex05 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		int a = 10;
		
		Static.b = a;
		
		Static st = new Static();
		
		System.out.println(Static.b++);
		
		System.out.println(st.b);
		System.out.println(a);
		System.out.println(st.a);
	}

}
