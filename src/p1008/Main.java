package p1008;

import java.util.Arrays;
import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805316250615808
 *
 * @author finlu
 * @date 2021/1/5
 */
public class Main {
    private static void reverseArray(int[] numbers, int start, int end) {
        while (start <= end) {
            int tmp = numbers[start];
            numbers[start] = numbers[end];
            numbers[end] = tmp;
            start++;
            end--;
        }
    }

    private static void printArray(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println(arr[arr.length - 1]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] NM = sc.nextLine().split(" ");
        int N = Integer.parseInt(NM[0]);
        // 对 N 取余数是为了防止M比N大造成完全交换（移动N位相当于没有移动）
        int M = Integer.parseInt(NM[1]) % N;
        int[] numbers = new int[N];
        for (int i = 0; i < N; i++) {
            numbers[i] = sc.nextInt();
        }
        reverseArray(numbers, 0, N - 1);
        reverseArray(numbers, 0, M - 1);
        reverseArray(numbers, M, N - 1);

        printArray(numbers);
    }
}
