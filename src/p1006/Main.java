package p1006;

import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805318855278592
 *
 * @author finlu
 * @date 2021/1/4
 */
public class Main {

    /**
     * 处理101~999
     *
     * @param number 101~999
     * @param sb
     */
    private static void addB(int number, StringBuilder sb) {
        int b = number / 100;
        for (int i = 0; i < b; i++) {
            sb.append('B');
        }
        addS(number % 100, sb);
    }

    /**
     * 处理10~99
     *
     * @param number 10~99
     * @param sb
     */
    private static void addS(int number, StringBuilder sb) {
        int s = number / 10;
        for (int i = 0; i < s; i++) {
            sb.append('S');
        }
        addG(number % 10, sb);
    }

    /**
     * 处理0～9
     *
     * @param number 0～9
     * @param sb
     */
    private static void addG(int number, StringBuilder sb) {
        for (int i = 0; i < number; i++) {
            sb.append(i + 1);
        }
    }

    public static void main(String[] args) {
        int number = new Scanner(System.in).nextInt();
        StringBuilder sb = new StringBuilder();
        if (number >= 100 && number < 1000) {
            addB(number, sb);
        } else if (number >= 10 && number < 100) {
            addS(number, sb);
        } else if (number >= 0 && number < 10) {
            addG(number, sb);
        } else {
            throw new RuntimeException("输入非法");
        }
        System.out.println(sb.toString());
    }
}
