package p1012;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805311146147840
 *
 * @author finlu
 * @date 2021/1/6
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int A1 = 0, A2 = 0, A3 = 0, A4All = 0, A5 = Integer.MIN_VALUE;
        // 如果 A1 和 A2 不使用一个额外的变量进行标识的话，可能最后算出的结果是0，但是此时应该输出0而不是N
        int A1Count = 0, A2Flag = 1, A2Count = 0, A4Count = 0;

        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            if (num % 5 == 0) {
                if (num % 2 == 0) {
                    A1Count++;
                    A1 += num;
                }
            } else if (num % 5 == 1) {
                A2Count++;
                A2 += A2Flag * num;
                A2Flag = -A2Flag;
            } else if (num % 5 == 2) {
                A3++;
            } else if (num % 5 == 3) {
                A4All += num;
                A4Count++;
            } else if (num % 5 == 4) {
                A5 = Math.max(num, A5);
            }
        }

        // 按格式输出
        if (A1Count == 0) {
            System.out.print("N");
        } else {
            System.out.print(A1);
        }
        System.out.print(" ");

        if (A2Count == 0) {
            System.out.print("N");
        } else {
            System.out.print(A2);
        }
        System.out.print(" ");

        if (A3 == 0) {
            System.out.print("N");
        } else {
            System.out.print(A3);
        }
        System.out.print(" ");

        if (A4Count == 0) {
            System.out.print("N");
        } else {
            System.out.printf("%.1f", (float) A4All / A4Count);
        }
        System.out.print(" ");

        if (A5 == Integer.MIN_VALUE) {
            System.out.print("N");
        } else {
            System.out.print(A5);
        }
        System.out.println();
    }
}
