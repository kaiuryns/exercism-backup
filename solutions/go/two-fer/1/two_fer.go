// Package twofer implements a simple library for sharing things.
package twofer

// ShareWith returns a string with the format "One for [name], one for me."
// If the name is empty, it returns "One for you, one for me."
func ShareWith(name string) string {
	if name == "" {
        name = "you"
    }
	return "One for " + name + ", one for me."
}
