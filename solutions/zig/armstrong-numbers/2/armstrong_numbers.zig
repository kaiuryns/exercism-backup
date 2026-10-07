const math = @import("std").math;
const log10_int = math.log10_int;
const pow = math.pow;

pub fn isArmstrongNumber(num: u128) bool {
    const digits = if (num == 0) 1 else log10_int(num) + 1;
    var n = num;
    var sum: u128 = 0;

    while (n > 0) : (n /= 10) {
        sum += pow(u128, n % 10, digits);
    }

    return num == sum;
}
