import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         System.out.println("hii");
//     }
// }
// class Main {
//     static int multiply(int a, int b) {
//         return a * b;
//     }

//     public static void main(String[] args) {
//         int number1 = 6;
//         int number2 = 4;

//         int result = multiply(number1, number2);
//         System.out.println("Product: " + result);
//     }
// }
// class Main{
//     public static void main(String[] args) {
//         int n = 5; 

//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print("* ");
//             }
//             System.out.println();
//         }
//     }
// class Main{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a number: ");
//         int n = sc.nextInt();

//         int sum = 0;
//         for (int i = 1; i <= n; i++) {
//             sum += i;
//         }

//         System.out.println(sum);
//     }










// }
class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements of array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    
   }
}   