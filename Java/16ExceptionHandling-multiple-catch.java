import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int []arr = {1, 2, 3, 4, 5};
        
        try {
            int result = 10 / 0;
            int value = arr[-1];
        }
        catch(ArithmeticException e) {
            System.out.println(e.getMessage());
        }
        catch(ArrayIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
    }
}
// Here the value = arr[-1] will never excutes because ArithmeticException catch block will execute and the program terminates never go the 9 line of the code 
// To solve that problem we have to use two try blocks