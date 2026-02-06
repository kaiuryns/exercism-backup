public class LogLine {

    private final String logLine;

    public LogLine(String logLine) {
        this.logLine = logLine;
    }

    public LogLevel getLogLevel() {
        String log = logLine.substring(1, logLine.indexOf("]"));

        switch(log){
            case "TRC": return LogLevel.TRACE;
            case "DBG": return LogLevel.DEBUG;
            case "INF": return LogLevel.INFO;
            case "WRN": return LogLevel.WARNING;
            case "ERR": return LogLevel.ERROR;
            case "FTL": return LogLevel.FATAL;
            default : return LogLevel.UNKNOWN;
        }
    }

    public String getOutputForShortLog() {
        return getLogLevel().getLogLevel() + ":" + logLine.substring(logLine.indexOf(":") + 2);
    }
}
