// FUN_140051cf0 @ 140051cf0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c780 FUN_14000c780
//   -> 14000c2d0 FUN_14000c2d0


void FUN_140051cf0(ulonglong *param_1,char *param_2)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *local_res10;
  
  if (param_2 != (char *)0x0) {
    puVar3 = operator_new(0x20);
    *(undefined8 *)(puVar3 + 0x18) = 0xf;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    if (*param_2 != '\0') {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != '\0');
    }
    local_res10 = puVar3;
    FUN_14000c780(puVar3,param_2);
    ppuVar1 = (undefined1 **)param_1[1];
    if ((&local_res10 < ppuVar1) && (ppuVar2 = (undefined1 **)*param_1, ppuVar2 <= &local_res10)) {
      if (ppuVar1 == (undefined1 **)param_1[2]) {
        FUN_14000c2d0(param_1,1);
      }
      if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] =
             *(undefined8 *)(*param_1 + ((longlong)&local_res10 - (longlong)ppuVar2 >> 3) * 8);
      }
    }
    else {
      if (ppuVar1 == (undefined1 **)param_1[2]) {
        FUN_14000c2d0(param_1,1);
      }
      if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = puVar3;
      }
    }
    param_1[1] = param_1[1] + 8;
  }
  return;
}

