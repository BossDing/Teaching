import java.util.*;

public class NumberTest {

    public static void main(String[] args) {
        int[] array = new int[50];
        Random random = new Random();
        for (int i = 0; i < 50; i++) {
            int number = random.nextInt(10000) + 1;;
            while (exist(array, number)) {
                number = random.nextInt(10000) + 1;
            }
            array[i] = number;
        }
        Arrays.sort(array);
        int min = array[1] - array[0];
        int index = 1;
        for (int i = 1; i <= 49; i++) {
            int sub = array[i] - array[i - 1];
            if (sub <= min) {
                min = sub;
                index = i;
            }
        }
        System.out.println(Arrays.toString(array));
        System.out.println(array[index - 1] + ", " + array[index]);
    }

    public static boolean exist(int[] array, int number) {
        for (int i = 0, len = array.length; i < len; i++) {
            if (array[i] == number) {
                return true;
            }
        }
        return false;
    }

}
