import java.util.HashMap;
import java.util.Map;
public class Main {
    public static void main(String[] args) {
        // HashMap Declaration 
        HashMap<Integer, String> map = new HashMap<>();
        // Adding Elements
        map.put(101, "John");
        map.put(102, "Alice");
        map.put(103, "Bob");
        // Print
        System.out.println(map);
        map.put(102, "David");
        System.out.println(map);
        System.out.println(map.get(101));
        // 999 key is not present in map so it prints null
        System.out.println(map.get(999));
        // remove an Element
        map.remove(101);
        System.out.println(map);
        // Checking if key exits returns true if exits otherwise false
        System.out.println(map.containsKey(102));
        // HashMap Size 
        System.out.println(map.size());
        for(Map.Entry<Integer, String> entry : map.entrySet()) {
            System.out.println(entry.getKey() + ":" + entry.getValue());
        }
    }
}