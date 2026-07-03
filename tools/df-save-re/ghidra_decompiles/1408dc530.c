// FUN_1408dc530 @ 1408dc530
// callees:
//   -> 1408b9be0 FUN_1408b9be0


void FUN_1408dc530(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 600) - *(longlong *)(param_1 + 0x250) >> 3 != 0) {
    uVar2 = 0;
    do {
      FUN_1408b9be0(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + uVar2 * 8),iVar1 + 0x1a3,
                    *(undefined4 *)(param_1 + 0x20));
      iVar1 = iVar1 + 1;
      uVar2 = (ulonglong)iVar1;
    } while (uVar2 < (ulonglong)(*(longlong *)(param_1 + 600) - *(longlong *)(param_1 + 0x250) >> 3)
            );
  }
  return;
}

