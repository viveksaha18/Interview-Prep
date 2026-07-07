import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an Integer: ");
        int a = sc.nextInt();
        System.out.println(a);
        System.out.println("Enter a float number");
        float b = sc.nextFloat();
        System.out.println(b);
        System.out.println("Enter a double number");
        double c = sc.nextDouble();
        System.out.println(c);
        System.out.println("Enter a string");
        String word = sc.next();
        System.out.println(word);
        sc.nextLine();
        System.out.println("Enter a sentence");
        String sentence = sc.nextLine();
        System.out.println(sentence);
        System.out.println("Enter a character");
        char ch = sc.next().charAt(0);
        System.out.println(ch);
        System.out.println("Enter a boolean value");
        boolean flag = sc.nextBoolean();
        System.out.println(flag);
    }
}