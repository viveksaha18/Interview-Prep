// First Non-Repeating Characters
import java.util.Scanner;
import java.util.HashMap;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String s = sc.nextLine();
        HashMap<Character, Integer> mpp = new HashMap<>();
        int n = s.length();
        for(int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if(mpp.containsKey(c)) {
                mpp.put(c, mpp.get(c)+1);
            }
            else mpp.put(c, 1);
        }
        for(int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if(mpp.get(c) == 1) {
                System.out.println(c);
                break;
            }
        }
    }
}