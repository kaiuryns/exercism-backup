// Package weather provides tools to tell the weather forecast.
package weather

var (
	// CurrentCondition represents the current weather condition.
	CurrentCondition string

	// CurrentLocation represents the current city location.
	CurrentLocation string
)

// Forecast returns a formatted weather forecast for a given city and condition.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
