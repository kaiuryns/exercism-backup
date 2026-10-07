pub fn eggCount(number: usize) usize {
    var total: usize = 0;
    var mask: usize = 1;

    while (mask != 0) : (mask <<= 1) {
        if ((number & mask) != 0) total += 1;
    }
    return total;
}
