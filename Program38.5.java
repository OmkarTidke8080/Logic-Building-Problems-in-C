// Write a java program which accept number of rows and columns from user and display below patterns

// input = iRow = 4;   iCol = 4

/*
 *  1 2 3 4 
 *  5 6 7 8 
 *  9 10 11 12
 *  
 */
 
 import java.util.*;

 public class Program5
 {
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter numbe rof rows : ");
       int iRow = sobj.nextInt();

       System.out.println("Enter number of columns : ");
       int iCol = sobj.nextInt();

       pattern pobj = new pattern();
       pobj.Pattern(iRow, iCol);
    }
 }
 class pattern
 {
   public void Pattern(int iRow, int iCol)
   {
      int i = 1;
      int j = 1;
      int iCnt = 0;

      for( i = 1,iCnt = 1; i <= iRow; i++)
      {
        for( j = 1; j <= iCol; j++,iCnt++)
        {
            System.out.print("\t"+iCnt);           
        }
              System.out.println( );

      }
   }
 }
