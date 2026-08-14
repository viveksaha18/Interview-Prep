public class Main {
    public static void main(String[] args) {
        // About finally block - runs every time even if catch blocks get executed
        int []arr = {1, 2, 3, 4};
        try {
            int result = 4/0;
            int val = arr[9];
        }
        catch(ArithmeticException e) {
            System.out.println(e.getMessage());
        }
        catch(ArrayIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
        finally {
            System.out.println("I will execute every time");
        }
    }
}