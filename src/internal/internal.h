#ifndef RLANG_INTERNAL_INTERNAL_H
#define RLANG_INTERNAL_INTERNAL_H

#include "quo.h"


extern sexp* rlang_zap;

extern sexp* as_list_call;
extern sexp* as_list_s4_call;

extern sexp* rlang_objs_keep;
extern sexp* rlang_objs_trailing;

extern sexp* fns_function;

void rlang_init_internal();
sexp* rlang_ns_get(const char* name);


#endif
