import java.util.Scanner;

public class encrypt {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        String s = sc.nextLine();
        int key = sc.nextInt();
        sc.close();
        String y = "";
        for (int i = 0; i < s.length(); i++) {
            y += (char) (s.charAt(i) + key);
        }
        System.out.println(y);
    }
}