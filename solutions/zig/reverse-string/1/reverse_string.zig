/// Writes a reversed copy of `s` to `buffer`.
pub fn reverse(buffer: []u8, s: []const u8) []u8 {
    for (0..s.len) |i| {
        const end = s.len - i - 1;
        buffer[i] = s[end];
    }
    return buffer[0..s.len];
}
