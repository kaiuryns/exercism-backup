public class PangramChecker {
    public boolean isPangram(String input) {
        if (input.isEmpty())
            return false;
    
        input = input.toLowerCase();
    
        for (char c = 'a'; c <= 'z'; c++) {
            if (input.indexOf(c) == -1)
                return false;
        }
        return true;
    }
}
