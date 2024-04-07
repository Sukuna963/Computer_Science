public class Kata {
  public static String findNeedle(Object[] haystack) {
    
    int position = 0;
    
    for(int i = 0; i < haystack.length - 1; i++) {
      if(haystack[i] == "needle")
        position = i;
    }
    
    return String.format("found the needle at position %s", position);
  }
}