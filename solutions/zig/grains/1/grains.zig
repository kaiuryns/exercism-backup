const pow = @import("std").math.pow;

pub const ChessboardError = error{IndexOutOfBounds};

pub fn square(index: usize) ChessboardError!u64 {
    if (index == 0 or index > 64) return ChessboardError.IndexOutOfBounds;
    return pow(u64, 2, index - 1);
}

pub fn total() u64 {
    return @as(u64, 0) -% 1;
}
