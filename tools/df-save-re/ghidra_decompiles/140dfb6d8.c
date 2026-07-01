// operator_new @ 140dfb6d8
// callees:


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

