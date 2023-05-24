/**
 * 设备文件系统描述
 *
 * 创建时间：2022年8月5日
 * 作者：宁启山
 * 联系邮箱: 99646532@qq.com
 */
#ifndef DEVFS_H
#define DEVFS_H

#include "fs/fs.h"

/**
 * @brief 设备类型描述结构
 */
typedef struct _devfs_type_t {
    const char * name;
    int dev_type;
    int file_type;
}devfs_type_t;

#endif
