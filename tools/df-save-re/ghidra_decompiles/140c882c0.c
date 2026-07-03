// FUN_140c882c0 @ 140c882c0
// callees:
//   -> 14000c390 FUN_14000c390


void FUN_140c882c0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_res10 [6];
  
  puVar1 = (ulonglong *)(param_1 + 0x458);
  iVar4 = 0;
  if ((longlong)(*(longlong *)(param_1 + 0x460) - *puVar1) >> 2 != 0) {
    do {
      iVar4 = iVar4 + 1;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)((longlong)(*(longlong *)(param_1 + 0x460) - *puVar1) >> 2));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x460);
  local_res10[0] = param_2;
  if ((local_res10 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_res10)) {
    if (puVar2 == *(undefined4 **)(param_1 + 0x468)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0x460) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x460) =
           *(undefined4 *)(*puVar1 + ((longlong)local_res10 - (longlong)puVar3 >> 2) * 4);
      *(longlong *)(param_1 + 0x460) = *(longlong *)(param_1 + 0x460) + 4;
      return;
    }
  }
  else {
    if (puVar2 == *(undefined4 **)(param_1 + 0x468)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0x460) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x460) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x460) = *(longlong *)(param_1 + 0x460) + 4;
  return;
}

