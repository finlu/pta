package p1015;

import java.util.*;

/**
 * PAT(Basic Level) Practice
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805307551629312
 *
 * @author finlu
 * @date 2021/1/9
 */
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] strings = sc.nextLine().split("\\s+");
        int N = Integer.parseInt(strings[0]);
        int L = Integer.parseInt(strings[1]);
        int H = Integer.parseInt(strings[2]);
        Comparator<Integer[]> comparator = (o1, o2) -> {
            if (o1[1] + o1[2] == o2[1] + o2[2]) {
                if (o1[1].equals(o2[1])) {
                    if (o1[0].equals(o2[0])) {
                        return 0;
                    }
                    return o1[0] < o2[0] ? -1 : 1;
                }
                return o1[1] < o2[1] ? 1 : -1;
            }
            return o1[1] + o1[2] < o2[1] + o2[2] ? 1 : -1;
        };
        TreeSet<Integer[]> C1 = new TreeSet<>(comparator);
        TreeSet<Integer[]> C2 = new TreeSet<>(comparator);
        TreeSet<Integer[]> C3 = new TreeSet<>(comparator);
        TreeSet<Integer[]> C4 = new TreeSet<>(comparator);

        for (int i = 0; i < N; i++) {
            int num = sc.nextInt();
            int dScore = sc.nextInt();
            int cScore = sc.nextInt();
            if (dScore >= H && cScore >= H) {
                // 德才全尽  第一类考生
                C1.add(new Integer[]{num, dScore, cScore});
            } else if (dScore >= H && cScore >= L) {
                C2.add(new Integer[]{num, dScore, cScore});
            } else if (dScore < H && dScore >= L && cScore < H && dScore >= cScore) {
                C3.add(new Integer[]{num, dScore, cScore});
            } else if (dScore >= L && dScore < H && cScore >= L) {
                C4.add(new Integer[]{num, dScore, cScore});
            }
        }

        System.out.println(C1.size() + C2.size() + C3.size() + C4.size());
        for (Integer[] integers : C1) {
            System.out.println(integers[0] + " " + integers[1] + " " + integers[2]);
        }
        for (Integer[] integers : C2) {
            System.out.println(integers[0] + " " + integers[1] + " " + integers[2]);
        }
        for (Integer[] integers : C3) {
            System.out.println(integers[0] + " " + integers[1] + " " + integers[2]);
        }
        for (Integer[] integers : C4) {
            System.out.println(integers[0] + " " + integers[1] + " " + integers[2]);
        }
    }
}
