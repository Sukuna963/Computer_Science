//////////////////////////////////////////////////
// Author: Leonardo Marques
// Codewars: 7 kyu
// Language: java 17
//////////////////////////////////////////////////

/*
import static java.time.Year.of;

interface LeapYears {
  static boolean isLeapYear(int year) {
    return of(year).isLeap();
  }
}

*/

public class LeapYears {

  public static boolean isLeapYear(int year) {
    
    boolean isLeapYear = (year % 4 == 0);
    
    isLeapYear = isLeapYear && (year % 100 != 0 || year % 400 == 0);
    
    return isLeapYear;
  }
}