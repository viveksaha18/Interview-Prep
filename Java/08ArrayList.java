// List in Java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        // We can say dynamic array 
        List<Integer> list = new ArrayList<>();
        // 1. add()
        list.add(1);
        list.add(5);
        list.add(3);
        System.out.println(list);
        System.out.println("------------------------------");
        
        // 2. add(index, element) : Add the element at the index postion and move that prev element to the next postion
        // we have [1, 5, 3] in the list after doing add(1, 4) it will be [1, 4, 5, 3]
        list.add(1, 4);
        System.out.println(list);
        System.out.println("------------------------------");
        
        // 3. get() : helps to the get the value from the particular index it accepts an index as an argument
        int value = list.get(2);
        System.out.println("Value at index 2:"+ " " + value);
        System.out.println("------------------------------");
        
        
        // 4.set(index, element) : Helps to replace the element at the particular index you are giving as an argument
        list.set(0, 9);
        System.out.println(list);
        System.out.println("------------------------------");
        
        
        // 5.remove() : Helps to remove the value
        list.remove(2);
        System.out.println(list);
        System.out.println("------------------------------");
        // By value
        list.remove(Integer.valueOf(3));
        System.out.println(list);
        System.out.println("------------------------------");
        
        
        // 6. contains() : returns true or false depends upon the presence of a item true if present otherwise false
        System.out.println(list.contains(5));
        System.out.println("------------------------------");
        
        
        // 7. size() : returns the size of the list
        System.out.println("Size of the list"+": "+list.size());
        System.out.println("------------------------------");
        
        // 8. isEmpty() : returns true or false 
        System.out.println(list.isEmpty());
        System.out.println("------------------------------");
        
        // 9. clear() : removes all the elements from the list
        list.clear();
        System.out.println(list);
        System.out.println("------------------------------");
        
        // one more syntax
        ArrayList<String> fruits = new ArrayList<>();
        fruits.add("Apple");
        fruits.add("Bananna");
        fruits.add("Grapes");
    
        // Looping in a list
        for(int i = 0; i < fruits.size(); i++) {
            System.out.println(fruits.get(i));
        }
        System.out.println("------------------------------");
        for(String s : fruits) {
            System.out.println(s);
        }
    }
}