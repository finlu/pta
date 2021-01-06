package p1011;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805312417021952
 *
 * @author finlu
 * @date 2021/1/6
 */
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= n; i++) {
            String[] strings = sc.nextLine().split("\\s+");
            int A = Integer.parseInt(strings[0]);
            int B = Integer.parseInt(strings[1]);
            int C = Integer.parseInt(strings[2]);
            if (A >= 0 && B >= 0) {
                if (Integer.MAX_VALUE - A < B) {
                    // 发生上溢出,此时A+B一定大于C
                    System.out.println("Case #" + i + ": " + true);
                } else {
                    System.out.println("Case #" + i + ": " + (A + B > C));
                }
            } else if (A < 0 && B < 0) {
                // 发生下溢出,此时A+B一定大于C
                // -1 是为了防止当B为 Integer.MIN_VALUE 时候发生溢出
                // 1. A + B < Integer.MIN_VALUE
                // 2. 由于 A < 0, 所以 A - Integer.MIN_VALUE 一定不会溢出
                // 3. 移项 ==> A - Integer.MIN_VALUE < - B
                // 4. 考虑当B为 Integer.MIN_VALUE 时, -B会发生溢出，所以先对 B 加 1 再取反
                // 5. A - Integer.MIN_VALUE - 1 < -(B + 1)
                if (A - Integer.MIN_VALUE - 1 < -(B + 1)) {
                    System.out.println("Case #" + i + ": " + false);
                } else {
                    System.out.println("Case #" + i + ": " + (A + B > C));
                }
            } else {
                // A+B 和 C都在整数范围内，可以直接比较
                System.out.println("Case #" + i + ": " + (A + B > C));
            }
        }
    }
}