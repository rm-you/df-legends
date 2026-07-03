// `eh_vector_destructor_iterator' @ 140dfb600
// callees:
//   -> 140dfc26c _guard_check_icall


/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2015 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    _guard_check_icall(param_4);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}

