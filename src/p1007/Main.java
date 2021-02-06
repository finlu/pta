package p1007;

import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805317546655744
 *
 * @author finlu
 * @date 2021/1/5
 */
public class Main {
    /**
     * 判断一个数是否是素数
     *
     * @param number
     * @return
     */
    private static boolean isPrime(int number) {
        int sqrtNumber = (int) Math.sqrt(number);
        for (int i = 2; i <= sqrtNumber; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int N = new Scanner(System.in).nextInt();
        int prePrime = 0;
        int resCount = 0;
        for (int i = 2; i <= N; i++) {
            if (isPrime(i)) {
                if (prePrime != 0) {
                    resCount += i - prePrime == 2 ? 1 : 0;
                }
                prePrime = i;
            }
        }
        System.out.println(resCount);
    }
}
