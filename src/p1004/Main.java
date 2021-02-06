package p1004;

import java.util.*;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805321640296448
 *
 * @author finlu
 * @date 2021/1/3
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        SortedMap<Integer, String> sortedMap = new TreeMap<>();
        while (n > 0) {
            String[] strings = sc.nextLine().split(" ");
            sortedMap.put(Integer.valueOf(strings[2]), strings[0] + " " + strings[1]);
            n--;
        }
        System.out.println(sortedMap.get(sortedMap.lastKey()));
        System.out.println(sortedMap.get(sortedMap.firstKey()));
    }
}
