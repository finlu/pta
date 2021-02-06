package p1016;

import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805306310115328
 *
 * @author finlu
 * @date 2021/1/10
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(), DA = sc.nextInt(), B = sc.nextInt(), DB = sc.nextInt(), PA = 0, PB = 0;
        while (A != 0) {
            if (A % 10 == DA) {
                PA = PA * 10 + DA;
            }
            A = A / 10;
        }
        while (B != 0) {
            if (B % 10 == DB) {
                PB = PB * 10 + DB;
            }
            B = B / 10;
        }
        System.out.println(PA + PB);
    }
}
