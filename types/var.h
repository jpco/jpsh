#ifndef JPSH_TYPES_VAR_H
#define JPSH_TYPES_VAR_H

#include "m_str.h"
#include "job_queue.h"

typedef struct {
        char is_fn;
        union {
                m_str *value;
                job_queue *jq;
        } v;
} var_j;

#endif
