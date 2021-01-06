package p1014;

import java.util.Scanner;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805308755394560
 *
 * @author finlu
 * @date 2021/1/6
 */
public class Main {
    /**
     * 星期显示映射关系
     *
     * @param c
     * @return
     */
    private static String getWeek(char c) {
        switch (c) {
            case 'A':
                return "MON";
            case 'B':
                return "TUE";
            case 'C':
                return "WED";
            case 'D':
                return "THU";
            case 'E':
                return "FRI";
            case 'F':
                return "SAT";
            case 'G':
                return "SUN";
            default:
                throw new RuntimeException("输入错误");
        }
    }

    /**
     * 小时显示映射关系
     *
     * @param c
     * @return
     */
    private static String getHour(char c) {
        switch (c) {
            case '0':
                return "00";
            case '1':
                return "01";
            case '2':
                return "02";
            case '3':
                return "03";
            case '4':
                return "04";
            case '5':
                return "05";
            case '6':
                return "06";
            case '7':
                return "07";
            case '8':
                return "08";
            case '9':
                return "09";
            case 'A':
                return "10";
            case 'B':
                return "11";
            case 'C':
                return "12";
            case 'D':
                return "13";
            case 'E':
                return "14";
            case 'F':
                return "15";
            case 'G':
                return "16";
            case 'H':
                return "17";
            case 'I':
                return "18";
            case 'J':
                return "19";
            case 'K':
                return "20";
            case 'L':
                return "21";
            case 'M':
                return "22";
            case 'N':
                return "23";
            default:
                throw new RuntimeException("输入错误");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.nextLine();
        String B = sc.nextLine();
        String C = sc.nextLine();
        String D = sc.nextLine();
        char weekChar = '\0', hourChar = '\0';
        int minute = 0, count = 0;
        for (int i = 0; i < A.length() && i < B.length(); i++) {
            if (A.charAt(i) >= 'A' && A.charAt(i) <= 'G' && A.charAt(i) == B.charAt(i) && count == 0) {
                weekChar = A.charAt(i);
                count++;
            } else if ((A.charAt(i) >= '0' && A.charAt(i) <= '9' || A.charAt(i) >= 'A' && A.charAt(i) <= 'N') && A.charAt(i) == B.charAt(i) && count == 1) {
                hourChar = A.charAt(i);
                break;
            }
        }
        for (int i = 0; i < C.length() && i < D.length(); i++) {
            if ((Character.isLowerCase(C.charAt(i)) || Character.isUpperCase(C.charAt(i))) && C.charAt(i) == D.charAt(i)) {
                minute = i;
                break;
            }
        }
        System.out.println(getWeek(weekChar) + " " + getHour(hourChar) + ":" + (minute < 10 ? "0" + minute : minute));
    }
}
