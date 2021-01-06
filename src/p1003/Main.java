package p1003;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805323154440192
 *
 * @author finlu
 * @date 2021/1/1
 */
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        int start = 0;
        String[] stringArr = new String[n];
        while (start < n) {
            stringArr[start] = scanner.nextLine();
            start++;
        }
        for (String input : stringArr) {
            int n1 = 0;
            int n2 = 0;
            int n3 = 0;
            boolean flag1 = true, flag2 = true, flag3 = true;
            int p = input.indexOf('P');
            if (p == -1) {
                System.out.println("NO");
                continue;
            }
            int t = input.indexOf('T');
            if (t == -1) {
                System.out.println("NO");
                continue;
            }
            for (int j = 0; j < p; j++) {
                if (input.charAt(j) == 'A') {
                    n1++;
                } else {
                    flag1 = false;
                    break;
                }
            }
            for (int j = p + 1; j < t; j++) {
                if (input.charAt(j) == 'A') {
                    n2++;
                } else {
                    flag2 = false;
                    break;
                }
            }
            for (int j = t + 1; j < input.length(); j++) {
                if (input.charAt(j) == 'A') {
                    n3++;
                } else {
                    flag3 = false;
                    break;
                }
            }
            if (flag1 && flag2 && flag3 && n1 * n2 == n3 && n2 != 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
