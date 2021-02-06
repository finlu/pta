package p1010;

import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805313708867584
 *
 * @author finlu
 * @date 2021/1/5
 */
public class Main {
    public static void main(String[] args) {
        // 直接用空格切分不能通过
        String[] inputStrings = new Scanner(System.in).nextLine().split("\\s+");
        int[] inputs = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            inputs[i] = Integer.parseInt(inputStrings[i]);
        }
        // flag 表示之前是否有输出
        boolean flag = false;
        for (int i = 0; i < inputs.length - 1; i += 2) {
            if (inputs[i + 1] != 0) {
                if (flag) {
                    System.out.print(" ");
                }
                System.out.print(inputs[i] * inputs[i + 1] + " " + (inputs[i + 1] - 1));
                flag = true;
            }
        }
        if (!flag) {
            System.out.println("0 0");
        }
    }
}
