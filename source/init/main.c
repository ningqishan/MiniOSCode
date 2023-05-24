/**
 * 简单的命令行解释器
 *
 * 作者：宁启山
 * 联系邮箱: 99646532@qq.com
 */
#include <stdio.h>

int main (int argc, char ** argv) {
    *(char *)0 = 0x1234;

    int a = 3 / 0;
    return 0;
}
