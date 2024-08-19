import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String s1 = br.readLine();
        String s2 = br.readLine();
        Stack<Character> st = new Stack<>();
        
        for (int i = 0; i < s1.length(); i++) {
            st.push(s1.charAt(i));
            if (s1.charAt(i) == s2.charAt(s2.length() - 1) && st.size() >= s2.length()) {
                StringBuilder tmp = new StringBuilder();
                for (int j = 0; j < s2.length(); j++) {
                    tmp.append(st.pop());
                }
                tmp.reverse();
                if (!tmp.toString().equals(s2)) {
                    for (int j = 0; j < tmp.length(); j++) {
                        st.push(tmp.charAt(j));
                    }
                }
            }
        }
        
        if (st.isEmpty()) {
            bw.write("FRULA");
        } else {
            Stack<Character> answer = new Stack<>();
            while (!st.isEmpty()) {
                answer.push(st.pop());
            }
            while (!answer.isEmpty()) {
                bw.write(answer.pop());
            }
        }
        
        bw.flush();
        bw.close();
        br.close();
    }
}