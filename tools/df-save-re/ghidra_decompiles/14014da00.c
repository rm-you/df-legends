// FUN_14014da00 @ 14014da00
// callees:
//   -> 140002020 FUN_140002020


void FUN_14014da00(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar1 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar1 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    FUN_140002020(**(longlong **)(param_1 + 0x18),lVar1 - **(longlong **)(param_1 + 0x18),1);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

