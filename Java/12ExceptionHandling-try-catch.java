public class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        try {
            System.out.println("Inside try catch block!.......");
            int result = a / b;
            System.out.println(result);
        }
        catch(ArithmeticException e){
            System.out.println(e.getMessage());
            System.out.println("A number cannot be divided by zero");
        }
    }
}
// Flow try-catch work flow try takes logic if errors is there then go with matching
// catch block 
// e is the reference to the exception object