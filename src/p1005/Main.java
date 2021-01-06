package p1005;

import java.util.*;

/**
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805320306507776
 *
 * @author finlu
 * @date 2021/1/3
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        String[] strings = sc.nextLine().split(" ");
        // 初始数集合
        List<Integer> initial = new ArrayList<>(n);
        // 记录过程中生成的数字
        Set<Integer> recordSet = new HashSet<>();
        // 控制是否需要输出空格
        boolean flag = false;

        for (String string : strings) {
            int keyNumber = Integer.parseInt(string);
            initial.add(keyNumber);
            while (keyNumber != 1) {
                if (keyNumber % 2 == 0) {
                    keyNumber = keyNumber / 2;
                } else {
                    keyNumber = (3 * keyNumber + 1) / 2;
                }
                // 已经生成过，直接退出循环
                if (recordSet.contains(keyNumber)) {
                    break;
                }
                // 记录下生成的数
                recordSet.add(keyNumber);
            }
        }

        // 将结果从大到小排序
        initial.sort((o1, o2) -> -(o1 - o2));

        for (int i = 0; i < n; i++) {
            int elem = initial.get(i);
            if (!recordSet.contains(elem)) {
                // 控制空格输出逻辑
                if (flag) {
                    System.out.print(" ");
                }
                System.out.print(elem);
                flag = true;
            }
        }
    }
}
