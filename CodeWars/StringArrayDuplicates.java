class Solution{    
    public static String[] dup(String[] arr){
        String[] newArray = new String[arr.length];
        
        for(int word = 0; word < arr.length; word++) {
            
            int i = 0;
            int j = 0;
            String newWord = "";
            
            while (j < arr[word].length()) {
                if (arr[word].charAt(i) == arr[word].charAt(j)) {
                    j++;
                }
                else if (arr[word].charAt(j) != arr[word].charAt(i) || j == arr[word].length() - 1) {
                    newWord += arr[word].charAt(i);
                    i = j;
                    j++;
                }
            }
            newWord += arr[word].charAt(j-1);
            newArray[word] = newWord;
        }
      
      return newArray;
    }
}