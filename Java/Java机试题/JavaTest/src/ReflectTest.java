import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class ReflectTest {

    public static void main(String[] args) throws NoSuchFieldException, IllegalAccessException, NoSuchMethodException, InvocationTargetException {
        User user = new User();
        Field field = user.getClass().getDeclaredField("name");
        field.setAccessible(true);
        System.out.println(field.get(user));
        field.set(user, "new_name");
        Method method = user.getClass().getDeclaredMethod("printInfo", int.class, String.class);
        method.setAccessible(true);
        method.invoke(user, 28, "男");
    }

}
