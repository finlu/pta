package p1023;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805298269634560
 *
 * @author finlu
 * @date 2021/1/22
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int zeroCount = 0;
        for (int i = 0; i < 10; i++) {
            int count = sc.nextInt();
            if (count == 0) continue;
            if (i == 0) {
                zeroCount = count;
                continue;
            }
            if (zeroCount != 0) {
                System.out.print(i);
                count --;
            }
            while (zeroCount != 0) {
                System.out.print('0');
                zeroCount--;
            }
            for (int j = 0; j < count; j++) {
                System.out.print(i);
            }
        }
        System.out.println();
    }
}
