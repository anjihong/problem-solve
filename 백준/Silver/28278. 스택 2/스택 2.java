import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int n = Integer.parseInt(bf.readLine());

        Stack<Integer> s = new Stack<>();
        for (int i = 0; i < n; i++) {
            String[] op = bf.readLine().split(" ");
            switch (Integer.parseInt(op[0])) {
                case 1 -> {
                    s.push(Integer.parseInt(op[1]));
                }
                case 2 -> {
                    if (s.empty()) sb.append("-1\n");
                    else sb.append(s.pop()).append("\n");
                }
                case 3 -> {
                    sb.append(s.size()).append("\n");
                }
                case 4 -> {
                    int e = s.empty() ? 1 : 0;
                    sb.append(e).append("\n");
                }
                case 5 -> {
                    if (s.empty()) sb.append(-1).append("\n");
                    else sb.append(s.peek()).append("\n");
                }
            }
        }
        System.out.println(sb);

    }
}
