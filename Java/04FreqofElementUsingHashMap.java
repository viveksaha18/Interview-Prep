import java.util.HashMap;
import java.util.Map;
public class Main {
    public static void main(String[] args) {
        // Finding frequency of each element in the array
        int[] arr = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6};
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int num : arr) {
            if(map.containsKey(num)) {
                map.put(num, map.get(num)+1);
            }
            else {
                map.put(num, 1);
            }
        }
        for(Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + ":" + entry.getValue());
        }   
    }
}