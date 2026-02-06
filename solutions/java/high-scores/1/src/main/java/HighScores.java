import java.util.List;
import java.util.Comparator;
import java.util.ArrayList;

class HighScores {
    private List<Integer> highScores;

    public HighScores(List<Integer> highScores) {
        this.highScores = highScores;
    }

    List<Integer> scores() {
        return highScores;
    }

    Integer latest() {
        return highScores.get(highScores.size() - 1);
    }

    Integer personalBest() {
        List<Integer> copy = new ArrayList<>(highScores);
        copy.sort(Comparator.reverseOrder());
        return copy.get(0);
    }

    List<Integer> personalTopThree() {
        List<Integer> copy = new ArrayList<>(highScores);
        copy.sort(Comparator.reverseOrder());
        int end = Math.min(3, copy.size());
        return copy.subList(0, end);
    }

}
