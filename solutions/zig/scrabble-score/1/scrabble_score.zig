const toLower = @import("std").ascii.toLower;

pub fn score(s: []const u8) u32 {
    var points: u32 = 0;

    for (s) |c| {
        points += letter_values(toLower(c));
    }    
    return points;
}

fn letter_values(letter: u8) u32 {
    return switch (letter) {
        'a', 'e', 'i', 'o', 'u',
        'l', 'n', 'r', 's', 't' => 1,
        'd', 'g' => 2,
        'b', 'c', 'm', 'p' => 3,
        'f', 'h', 'v', 'w', 'y' => 4,
        'k' => 5,
        'j', 'x' => 8,
        'q', 'z' => 10,
        else => unreachable,
    };
}