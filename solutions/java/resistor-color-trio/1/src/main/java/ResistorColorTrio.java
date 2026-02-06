import java.util.List;

class ResistorColorTrio {
    private final List<String> r = List.of(
        "black","brown","red","orange","yellow",
        "green","blue","violet","grey","white"
    );

    String label(String[] colors) {
        StringBuilder units = new StringBuilder();

        long value = (r.indexOf(colors[0]) * 10 + r.indexOf(colors[1])) * (long)Math.pow(10, r.indexOf(colors[2]));

        if (value % 1_000_000_000 == 0 && value != 0) {
            value /= 1_000_000_000;
            units.append(" gigaohms");
        } else if (value % 1_000_000 == 0 && value != 0) {
            value /= 1_000_000;
            units.append(" megaohms");
        } else if (value % 1_000 == 0 && value != 0) {
            value /= 1_000;
            units.append(" kiloohms");
        } else {
            units.append(" ohms");
        }

        return value + units.toString();
    }
}