/* ********************************
 * Author:       Zhanglele
 * Description:  长整数
 * create time:  2023.10.29
 ********************************/
#ifndef BIG_INT_H
#define BIG_INT_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint8_t *bytes;
    uint32_t byte_len;
} long_integer_t;

/** 创建长整数对象
 *  @attention val需要小于byte_len对应的整数的最大值
 * 
 *  @param: byte_len: [in] 长整数的字节数
 *  @return：长整数对象
 */
long_integer_t *integer_new(uint64_t val, uint32_t byte_len);

/** 销毁长整数对象
 *  @param: integer: [in] 长整数对象
 */
void integer_free(long_integer_t *integer);

/** 长字节整数向左偏移。对应操作符 << 。
 *  @param: integer: [in] 长整数对象
 *  @param: bits: [in] 偏移的比特数
 */
void integer_shift_left(long_integer_t *integer, uint32_t bits);

/** 长字节整数加一
 *  @param: integer: [in] 长整数对象
 */
void integer_inc(long_integer_t *integer);

/** 长字节整数加n
 *  @param: integer: [in] 长整数对象
 *  @param: n: [in] 加的整数
 */
void integer_add(long_integer_t *integer, uint32_t val);

/** 长字节整数赋值为val
 *  @param: integer: [in] 长整数对象
 *  @param: n: [in] 加的整数
 */
void integer_set(long_integer_t *integer, uint32_t val);

/** 比较两个长整数是否一致
 *  @param: integer1: [in] 长整数对象
 *  @param: integer2: [in] 长整数对象
 */
bool integer_equal(long_integer_t *integer1, long_integer_t *integer2);

#endif