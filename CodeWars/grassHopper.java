//////////////////////////////////////////////////
// Author: Leonardo Marques
// Codewars: 8 kyu
// Language: java 17
//////////////////////////////////////////////////

/*
    public class GrassHopper {

    public static int summation(int n) {
        if (n == 1)
          return 1;
        return summation(n-1) + n;
    }
}
*/

public class GrassHopper {

    public static int summation(int n) {
      int sumTotal = 0;
      
      for(int i = 1; i <= n; i++) {
        sumTotal += i;
      }
      return sumTotal;
    }
}