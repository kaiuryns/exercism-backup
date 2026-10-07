pub fn isArmstrongNumber(num: u128) bool {
    const digits = numberOfDigits(num);
    var n = num;
    var sum: u128 = 0;

    while (n > 0) : (n /= 10) {
        const value = n % 10;
        sum += pow(value, digits);
    }
    return sum == num;
}

fn numberOfDigits(num: u128) u8 {
    var n = num;
    if (n == 0) return 1;

    var counter: u8 = 0;
    while (n > 0) : (n /= 10) {
         counter += 1;
    }
    return counter;
}

fn pow(num: u128, digit: u8) u128 {
    var d = digit;
    var sum = num;
    while (d > 1) : (d -= 1) {
        sum *= num;
    }
    return sum;
}