// Difference between == and equals in Java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        String s1 = new String("Hello");
        String s2 = new String("Hello");
        System.out.println(s1 == s2); // returns false because it compares the memory address
        System.out.println(s1.equals(s2)); // returns true because it compares the value 
    }
}