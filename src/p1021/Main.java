package p1021;

import java.util.Scanner;
import java.util.TreeMap;


/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805300404535296
 *
 */
public class Main {
    public static void main(String[] args) {
        char[] input = new Scanner(System.in).nextLine().toCharArray();
        TreeMap<Character, Integer> treeMap = new TreeMap<>((o1, o2) -> {
            if (o1 == o2) {
                return 0;
            }
            return o1 > o2 ? 1 : -1;
        });

        for (char c : input) {
            if (treeMap.containsKey(c)) {
                treeMap.put(c, treeMap.get(c) + 1);
            } else {
                treeMap.put(c, 1);
            }
        }
        for (Character key: treeMap.keySet()) {
            System.out.println(key + ":" + treeMap.get(key));
        }
    }
}
