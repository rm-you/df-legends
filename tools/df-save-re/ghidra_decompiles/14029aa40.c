// FUN_14029aa40 @ 14029aa40
// callees:
//   -> 14029a920 FUN_14029a920


ulonglong FUN_14029aa40(longlong param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,
                       undefined2 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0x20) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x20) < puVar2) {
    uVar3 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar3 != 0) {
    do {
      uVar1 = FUN_14029a920(*puVar2,param_2,param_3,param_4,param_5);
      puVar2 = puVar2 + 1;
      if ((int)uVar5 < (int)uVar1) {
        uVar5 = (ulonglong)uVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return uVar5;
}

