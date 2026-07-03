// FUN_140281b30 @ 140281b30
// callees:
//   -> 140071310 FUN_140071310


int FUN_140281b30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    do {
      iVar1 = FUN_140071310(*puVar2,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while ((ulonglong)(longlong)iVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3));
  }
  return -1;
}

