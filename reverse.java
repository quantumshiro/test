import java.util.Arrays;

class reverse
{
    public static void main(String[] args)
    {
        int[] src = {12, 24, 18, 21};
        System.out.println(Arrays.toString(src));

        Arrays.sort(src);

        for (int i = 0, j = src.length - 1; i < j; i++, j--)
        {
            int tmp = src[i];
            src[i] = src[j];
            src[j] = tmp;
        }

        System.out.println(Arrays.toString(src));
    }
}