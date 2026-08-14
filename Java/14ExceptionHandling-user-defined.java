import java.util.Scanner;
class InvalidAgeException extends Exception {
    InvalidAgeException(String message) {
        super(message);
    }
}
public class Main {
    static void check(int age) throws InvalidAgeException {
        if(age < 18) {
            throw new InvalidAgeException("Age is below 18");
        }
        System.out.println("Eligible");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        try {
            check(age);
        }
        catch(InvalidAgeException e) {
            System.out.println(e.getMessage());
        }
    }
}

// Here InvalidAgeException is a user defined exception 
// throw throws the exception Object
// throws tells the caller this method might give an Exception
// super is used to call the parent class constructor and pass the argument
/* 
checkAge()
   │
   │  throw
   ↓
Exception object
   │
   │  propagates to caller
   ↓
try
   │
   ↓
matching catch
   │
   ↓
handle exception
*/