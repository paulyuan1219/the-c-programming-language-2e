unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return (x >> (p + 1 - n)) & ~(~0 << n);

    unsigned part_right = x & (~(~0 << (p + 1 - n)));

    unsigned part_middle = (x >> (p+1)) << n 
}

/*
编写一个函数setbits(x, p, n, y)，该函数返回对x执行下面操作的结果：将x中从p位开始的n个位设置为y中最右边的n位的值，x的其余各位保持不变

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned mask = ~(~0 << n); // 创建一个n位的掩码
    unsigned y_bits = y & mask; // 获取y的最右边n位
    unsigned x_mask = ~(mask << (p + 1 - n)); // 创建一个x的掩码，其中从p位开始的n位是0，其余位是1
    return (x & x_mask) | (y_bits << (p + 1 - n)); // 将x的指定位设置为y的最右边n位
}

这个函数首先创建了一个n位的掩码，然后用这个掩码获取y的最右边n位。然后，它创建了一个x的掩码，其中从p位开始的n位是0，其余位是1。最后，它将x的指定位设置为y的最右边n位。

这个函数的工作原理是通过位操作符来操作二进制位。它使用了位与(&)和位或(|)操作符来设置x的指定位，使用了位移(<<, >>)操作符来移动位，使用了位非(~)操作符来创建掩码。

*/

