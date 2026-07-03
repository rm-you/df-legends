// FUN_1401b83c0 @ 1401b83c0
// callees:
//   -> 140071310 FUN_140071310


int FUN_1401b83c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    do {
      iVar1 = FUN_140071310(*puVar2,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while ((ulonglong)(longlong)iVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  return -1;
}

