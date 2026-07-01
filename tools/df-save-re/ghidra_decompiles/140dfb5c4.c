// operator_new @ 140dfb5c4
// callees:
//   -> 140dfc9b4 _callnewh
//   -> 140dfc3ac FUN_140dfc3ac
//   -> 140dfc38c FUN_140dfc38c
//   -> 140dfc9ae malloc


/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Library: Visual Studio 2015 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  int iVar1;
  void *pvVar2;
  
  while (pvVar2 = malloc(param_1), pvVar2 == (void *)0x0) {
    iVar1 = _callnewh(param_1);
    if (iVar1 == 0) {
      if (param_1 == 0xffffffffffffffff) {
        FUN_140dfc3ac();
      }
      else {
        FUN_140dfc38c();
      }
    }
  }
  return pvVar2;
}

