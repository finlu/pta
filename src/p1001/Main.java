package p1001;

import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528
 *
 * @author finlu
 * @date 2021/1/1
 */
public class Main {
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();
        int step = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = (3 * n + 1) / 2;
            }
            step++;
        }
        System.out.println(step);
    }
}
