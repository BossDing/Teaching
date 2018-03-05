import java.io.*;

public class StringTest {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(
                new InputStreamReader(
                        new FileInputStream(
                                new File("src/test.txt")), "UTF-8"));
        StringBuilder stringBuilder = new StringBuilder();
        String line = null;
        int lineCount = 0;
        while ((line = bufferedReader.readLine()) != null) {
            stringBuilder.append(line).append("_&&_");
            lineCount++;
        }
        String[] strArray = stringBuilder.toString().split("_&&_");
        int theLongestLine = 0;
        int longest = 0;
        for (int i = 0, len = strArray.length; i < len; i++) {
            int length = strArray[i].length();
            if (length > longest) {
                longest = length;
                theLongestLine = i;
            }
        }
        String[] array = strArray[theLongestLine].split(" ");
        int theLongestWord = 0;
        int max = 0;
        for (int i = 0, len = array.length; i < len; i++) {
            int length = array[i].length();
            if (array[i].length() > max) {
                max = length;
                theLongestWord = i;
            }
        }
        System.out.println("总行数：" + lineCount);
        System.out.println("最长行：" + (theLongestLine + 1));
        System.out.println("最长行的最长单词：" + array[theLongestWord]);
    }

}
