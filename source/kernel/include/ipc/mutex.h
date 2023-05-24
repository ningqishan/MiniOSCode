/**
 * 互斥锁
 *
 * 作者：宁启山
 * 联系邮箱: 99646532@qq.com
 */
#ifndef MUTEX_H
#define MUTEX_H

#include "core/task.h"
#include "tools/list.h"

/**
 * 进程同步用的计数信号量
 */
typedef struct _mutex_t {
    task_t * owner;
    int locked_count;
    list_t wait_list;
}mutex_t;

void mutex_init (mutex_t * mutex);
void mutex_lock (mutex_t * mutex);
void mutex_unlock (mutex_t * mutex);
 
#endif //MUTEX_H
