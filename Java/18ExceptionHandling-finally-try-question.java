public class Main {
    // Here finally executes even if there is return in try block
    static int test() {
        try {
            System.out.println("Inside the try block");
            return 10;
        }
        finally {
            System.out.println("Inside the finally block");
        }
    }
    // Here finally block overrides the try return
    static int test1() {
        try {
            return 10;
        }
        finally {
            return 20;
        }
    }
    public static void main(String[] args) {
        int result = test();
        System.out.println(result);
        int ans = test1();
        System.out.println(ans);
    }
}