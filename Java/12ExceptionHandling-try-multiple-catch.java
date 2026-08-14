public class Main {
    public static void main(String[] args) {
        int []arr = {1, 2, 3, 4, 5};
        try {
            System.out.println(arr[7]);
        }
        catch(ArithmeticException e) {
            System.out.println(e.getMessage());
        }
        catch(ArrayIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
            System.out.println("Access the valid Index!.........");
        }
    }
}

// Try with multiple catch