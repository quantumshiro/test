import java.util.Arrays;

class sort
{
    public static void main(String[] args)
    {
        int[] src = {12, 24, 18, 35, 21};
        System.out.println(Arrays.toString(src));

        Arrays.sort(src);
        System.out.println(Arrays.toString(src));
    }
}