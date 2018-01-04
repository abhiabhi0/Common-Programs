//Abhishek Singh Thakur
//www.programmercave.blogspot.com
import java.util.Scanner;

public class Palindrome
{
  public static void main(String args[])
  {
    String word = "";
    String reverse = "";
    Scanner in = new Scanner(System.in);

    System.out.println("Enter the String");

    word = in.nextLine();
    int length = word.length();
    for(int i = length; i > 0; i--)
    {
      reverse += word.charAt(i-1);
    }

    if(word.equalsIgnoreCase(reverse))
    {
      System.out.println("The string "+word+" is palindrome");
    }
    else
    {
      System.out.println("The string "+word+" is not palindrome");
    }
  }
}
