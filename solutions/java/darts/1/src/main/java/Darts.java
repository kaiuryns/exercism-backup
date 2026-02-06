class Darts {
    int score(double xOfDart, double yOfDart) {
        double dart = (xOfDart * xOfDart) + (yOfDart * yOfDart);

        if (dart <= 1) {
            return 10;
        }
        else if (dart <= 25) {
            return 5;
        }
        else if (dart <= 100) {
            return 1;
        }
        return 0;
    }
}
