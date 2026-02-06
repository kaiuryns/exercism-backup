import java.util.List;

class ResistorColorDuo {
    private final List<String> r = List.of(
        "black","brown","red","orange","yellow",
        "green","blue","violet","grey","white"
    );

    int value(String[] c) {
        return r.indexOf(c[0]) * 10 + r.indexOf(c[1]);
    }
}
