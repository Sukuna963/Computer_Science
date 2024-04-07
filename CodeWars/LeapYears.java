public class LeapYears {

  public static boolean isLeapYear(int year) {
    
    boolean isLeapYear = (year % 4 == 0);
    
    isLeapYear = isLeapYear && (year % 100 != 0 || year % 400 == 0);
    
    return isLeapYear;
  }
}