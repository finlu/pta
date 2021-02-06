package p1002;

import java.util.Scanner;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805324509200384
 *
 * @author finlu
 * @date 2021/1/1
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String numStr = sc.nextLine();
        String[] nums = numStr.split("");
        int res = 0;
        for (String num : nums) {
            res += Integer.parseInt(num);
        }
        String[] strings = Integer.toString(res).split("");
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < strings.length; i++) {
            String s = strings[i];
            if ("0".equals(s)) {
                sb.append("ling");
            } else if ("1".equals(s)) {
                sb.append("yi");
            } else if ("2".equals(s)) {
                sb.append("er");
            } else if ("3".equals(s)) {
                sb.append("san");
            } else if ("4".equals(s)) {
                sb.append("si");
            } else if ("5".equals(s)) {
                sb.append("wu");
            } else if ("6".equals(s)) {
                sb.append("liu");
            } else if ("7".equals(s)) {
                sb.append("qi");
            } else if ("8".equals(s)) {
                sb.append("ba");
            } else if ("9".equals(s)) {
                sb.append("jiu");
            } else {
                throw new RuntimeException("error");
            }
            if (i != strings.length - 1) {
                sb.append(" ");
            }
        }
        System.out.println(sb.toString());
    }
}
