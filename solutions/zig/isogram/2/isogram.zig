const ascii = @import("std").ascii;

pub fn isIsogram(str: []const u8) bool {
    var letters: [26]bool = .{false} ** 26;

    for (str) |c| {
        if (!ascii.isAlphabetic(c)) continue;
        
        const index = ascii.toLower(c) - 'a';
        
        if (letters[index]) return false;
        
        letters[index] = true;
    }
    return true;
}
