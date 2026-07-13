import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String s = sc.nextLine();
        int n = s.length();
        HashMap<Character, Integer> mpp = new HashMap<>();
        for(int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if(mpp.containsKey(c)) {
                mpp.put(c, mpp.get(c)+1);
            }
            else {
                mpp.put(c, 1);
            }
        }
        for(Map.Entry<Character, Integer> entry : mpp.entrySet()) {
            System.out.println(entry.getKey()+ ":"+entry.getValue());
        }
    }
}