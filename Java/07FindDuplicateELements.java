// Find Duplicate Elements
import java.util.Scanner;
import java.util.HashMap;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int n = sc.nextInt();
        int []arr = new int[n];
        System.out.println("Enter the elements in the array: ");
        for(int i = 0; i < n; i++) {
            int element = sc.nextInt();
            arr[i] = element;
        }
        HashMap<Integer, Integer> mpp = new HashMap<>();
        for(int i = 0; i < n; i++) {
            if(mpp.containsKey(arr[i])) {
                mpp.put(arr[i], mpp.get(arr[i])+1);
            }
            else mpp.put(arr[i], 1);
        }
        System.out.println("Duplicates Elements are: ");
        for(int num : arr) {
            if(mpp.containsKey(num)) {
                if(mpp.get(num) > 1) {
                    System.out.println(num);
                    mpp.remove(num);
                } 
            }
        }
    }
}