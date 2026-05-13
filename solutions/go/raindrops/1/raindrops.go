package raindrops

import "strconv"

func Convert(number int) string {
    name := ""
    
	if number%3 == 0 {
        name += "Pling"
    }
    if number%5 == 0 {
        name += "Plang"
    }
    if number%7 == 0 {
        name += "Plong"
    }
    if name == "" {
        return strconv.Itoa(number)
    }
    return name
}
