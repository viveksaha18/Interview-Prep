import java.util.Scanner;
class InvalidBalanceException extends Exception {
    InvalidBalanceException (String message) {
        super(message);
    }
}
public class Main {
    static void checkBalance(int balance, int wAmount) throws InvalidBalanceException {
        if(balance - wAmount < 0) {
            throw new InvalidBalanceException("Withdrawl Failed");
        }
        int rBalance = balance - wAmount;
        System.out.println("Withdrawl Successful");
        System.out.println("Remaining Balance: "+ rBalance);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int balance = 5000;
        System.out.println("Enter the withdrawl amount");
        int wAmount = sc.nextInt();
        
        try {
            checkBalance(balance, wAmount);
        }
        catch(InvalidBalanceException e) {
            System.out.println(e.getMessage());
        }
    }
}