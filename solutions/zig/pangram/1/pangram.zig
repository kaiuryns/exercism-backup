const ascii = @import("std").ascii;

pub fn isPangram(str: []const u8) bool {
    var letters: [26]bool = .{false} ** 26;

    for (str) |c| {
        if (!ascii.isAlphabetic(c)) continue;
        const index = ascii.toLower(c) - 'a';

        letters[index] = true;
    }

    for (letters) |letter| {
        if (!letter) return false;
    }

    return true;
}
