package DSA.Array;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;

public class rotate_array {
    public static void main(String args[])throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        //taking testcases
        int t = Integer.parseInt(br.readLine());
        for(int i=0;i<t;i++)
        {
            String str=br.readLine();
            String[] starr=str.split(" ");

            //input n and d
            int n=Integer.parseInt(starr[0]);
            int d= Integer.parseInt(starr[1]);

            int[] arr=new int[n];
            String str1=br.readLine();
            String[] starr1=str1.split(" ");

            //inserting elements in the array
            for(int j=0;j<n;j++)
            {
                arr[j]= Integer.parseInt(starr1[j]);
            }

            //calling rotateArr() function
            new rotate().rotateArr(arr, d, n);
            StringBuffer sb=new StringBuffer();

            //printing the elements of the array
            for(int t1=0;t1<n;t1++)
                sb.append(arr[t1]+" ");
            System.out.println(sb);
        }
    }

}
class rotate{
    //Function to rotate an array by d elements in counter-clockwise direction.
    static void rotateArr(int arr[], int d, int n)
    {
        // add your code here
       int[] tem=new int[d];
        for (int i = 0; i < d; i++) {
            tem[i]=arr[i];
        }
        for (int i = 0; i <n-d ; i++) {
                arr[i]=arr[i+d];
        }
        for (int i=0;i<d;i++){
            arr[i+n-d]=tem[i];
        }
    }
}
