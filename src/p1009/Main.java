package p1009;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960
 *
 * @author finlu
 * @date 2021/1/5
 */
public class Main {
    public static void main(String[] args) {
        String[] input = new Scanner(System.in).nextLine().split(" ");
        for (int i = input.length - 1; i > 0; i--) {
            System.out.print(input[i] + " ");
        }
        System.out.println(input[0]);
    }
}
