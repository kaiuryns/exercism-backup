public class Lasagna {
    // TODO: define the 'expectedMinutesInOven()' method
    public static int expectedMinutesInOven()
    {
        return 40;
    }

    // TODO: define the 'remainingMinutesInOven()' method

    public static int remainingMinutesInOven(int minutes)
    {
        return Lasagna.expectedMinutesInOven() - minutes;
    }

    // TODO: define the 'preparationTimeInMinutes()' method

    public static int preparationTimeInMinutes(int layers)
    {
        return 2 * layers;
    }

    // TODO: define the 'totalTimeInMinutes()' method

    public int totalTimeInMinutes(int layers, int minutes)
    {
        return minutes + Lasagna.preparationTimeInMinutes(layers);
    }
}
