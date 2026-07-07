public class Main {
    public static void main(String[] args) {
        // Declaration of Array in Java
        int []arr;
        arr = new int[5];
        // One more way
        //int []arr = new arr[5];
        // int []arr={1, 2, 3};
        // Size of the Array
        System.out.println("Size of the array: "+ arr.length);
        int n = arr.length;
        // Updating the element 
        for(int i = 0; i < n; i++) {
            arr[i]=i;
        }
        for(int i = 0; i < n; i++) {
            System.out.println("Element at index "+ i + " is: "+ arr[i]);
        }
    }
}