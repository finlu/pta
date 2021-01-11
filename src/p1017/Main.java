package p1017;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805305181847552
 *
 * @author finlu
 * @date 2021/1/10
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        int B = sc.nextInt();
        int[] C = new int[A.length()];
        int pre = 0;

        for (int i = 0; i < A.length(); i++) {
            int n = A.charAt(i) - '0' + pre * 10;
            C[i] = n / B;
            pre = n % B;
        }
        boolean flag = false;
        for (int i = 0; i < C.length; i++) {
            if (C[i] != 0) {
                flag = true;
            }
            if (flag) {
                System.out.print(C[i]);
            }
        }
        System.out.println(" " + pre);
    }
}
