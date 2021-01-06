package p1013;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805309963354112
 *
 * @author finlu
 * @date 2021/1/6
 */
public class Main {
    private static boolean isPrime(int number) {
        int n = (int) Math.sqrt(number);
        for (int i = 2; i <= n; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        int i = 2, m = 0, n = 0, count = 0;
        while (n < N) {
            if (isPrime(i)) {
                n++;
                if (n == M) {
                    m = i;
                }
            }
            i++;
        }
        n = i - 1;
        for (int j = m; j <= n; j++) {
            if (isPrime(j)) {
                count++;
                System.out.print(j);
                if (count % 10 == 0) {
                    System.out.println();
                    continue;
                }
                if (j != n) {
                    System.out.print(" ");
                }
            }
        }
    }
}
