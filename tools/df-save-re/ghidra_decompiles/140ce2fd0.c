// FUN_140ce2fd0 @ 140ce2fd0
// callees:
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


void FUN_140ce2fd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xa78);
  if (((lVar2 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
     ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
    cVar1 = FUN_140106f30();
    FUN_1409165e0(lVar2 + 0x248,param_2,cVar1 != '\0');
    return;
  }
  return;
}

