const mem = @import("std").mem;

pub fn reverse(buffer: []u8, s: []const u8) []u8 {
    const out = buffer[0..s.len];
    @memcpy(out, s);
    mem.reverse(u8, out);
    return out;
}