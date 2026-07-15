// LinkedList In Java Collection
import java.util.*;
public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        System.out.println(list);
        int value = list.get(2);
        System.out.println(value);
    }
}