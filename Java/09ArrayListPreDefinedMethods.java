// Pre-defined functions in ArrayList 
import java.util.*;
public class Main {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>(Arrays.asList(9, 2, 4, 1, 8));
        
        // 1. Collections.sort() : accepts a list and sort it in ascending order 
        Collections.sort(list);
        System.out.println("Sorting the list using Collections.sort()"+ ": " +list);
        
        // 2. Collections.reverse() : accepts a list and reverse it
        Collections.reverse(list);
        System.out.println("Reversing the list using Collections.reverse()"+ ":  "+ list);
        
        // 3. Collections.max() : returns the maximum element from the list.
        int max = Collections.max(list);
        System.out.println("Maximum Element in the list using Collections.max()"+ ": "+max);
        
        // 4. Collections.min(): returns the minimum element from the list.
        int min = Collections.min(list);
        System.out.println("Min Element from the list using Collections.min()"+":"+ min);
        
        // 5. Collections.swap(list, idx1, idx2) : swaps idx1 and idx2 in the list
        Collections.swap(list, 0, 2);
        System.out.println(list);
        
        // 6. Collections.rotate(list, k) : rotate the list to k position
        Collections.rotate(list, 2);
        System.out.println("After Rotation of 2 places"+ ": "+ list);

    }
}