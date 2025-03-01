public class Ex04 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String str1 = "Programming";
		String str2 = "Programming";
		String str3 = new String("Programming");
		
		System.out.println(str1==str2);
		System.out.println(str1==str3);
		
		System.out.println(str1.equals(str3));
		System.out.println(str2.equals(str3));
	}

}
