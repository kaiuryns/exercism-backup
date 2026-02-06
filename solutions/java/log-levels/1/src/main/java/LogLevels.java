public class LogLevels {
    
    public static String message(String logLine) {
        int index = logLine.indexOf(":") + 2;
        return logLine.substring(index).trim();
    }

    public static String logLevel(String logLine) {
        int end = logLine.indexOf(']');
        return logLine.substring(1, end).toLowerCase();
    }

    public static String reformat(String logLine) {
        return String.format("%s (%s)", message(logLine), logLevel(logLine));
    }
}
