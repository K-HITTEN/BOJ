import java.io.*;
import java.util.*;

public class Main {
    static int N;
    static int[] result = new int[21];
    static boolean[] cols = new boolean[21];
    static boolean[] straight = new boolean[21];
    static boolean[] left_cross = new boolean[45];
    static boolean[] right_cross = new boolean[45];
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    static boolean search(int idx) throws IOException {
        if (idx == N + 1) {
            for (int i = 1; i <= N; i++) {
                bw.write(result[i] + " ");
            }
            return true;
        }
        if (cols[idx]) return search(idx + 1);
        for (int i = 1; i <= N; i++) {
            if (!straight[i] && !left_cross[idx - i + 21] && !right_cross[i + idx]) {
                result[idx] = i;
                straight[i] = true;
                left_cross[idx - i + 21] = true;
                right_cross[i + idx] = true;
                if (search(idx + 1)) {
                    return true;
                }
                result[idx] = 0;
                straight[i] = false;
                left_cross[idx - i + 21] = false;
                right_cross[i + idx] = false;
            }
        }
        return false;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= N; i++) {
            int tmp = Integer.parseInt(st.nextToken());
            if (tmp == 0) continue;
            result[i] = tmp;
            cols[i] = true;
            straight[tmp] = true;
            left_cross[i - tmp + 21] = true;
            right_cross[i + tmp] = true;
        }
        if (!search(1)) bw.write("-1");
        bw.flush();
        bw.close();
        br.close();
    }
}