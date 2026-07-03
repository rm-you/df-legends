// FUN_1405cc580 @ 1405cc580
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


undefined2 * FUN_1405cc580(ulonglong *param_1)

{
  undefined2 **ppuVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  undefined2 *local_res8;
  
  puVar3 = operator_new(0xa8);
  *(undefined8 *)(puVar3 + 0x24) = 0xf;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined1 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x34) = 0xf;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined1 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x3c) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x44) = 0;
  *puVar3 = 0xffff;
  puVar3[1] = 0xffff;
  puVar3[2] = 0xffff;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x3a) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
  puVar3[0x4a] = 0xffff;
  puVar3[0x4e] = 0xffff;
  *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[10] = 1;
  *(undefined4 *)(puVar3 + 0x4c) = 0;
  *(undefined4 *)(puVar3 + 0x52) = 0;
  ppuVar1 = (undefined2 **)param_1[1];
  local_res8 = puVar3;
  if (&local_res8 < ppuVar1) {
    ppuVar2 = (undefined2 **)*param_1;
    if (ppuVar2 <= &local_res8) {
      if (ppuVar1 == (undefined2 **)param_1[2]) {
        FUN_14000c2d0(param_1);
      }
      if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] =
             *(undefined8 *)(*param_1 + ((longlong)&local_res8 - (longlong)ppuVar2 >> 3) * 8);
      }
      param_1[1] = param_1[1] + 8;
      return puVar3;
    }
  }
  if (ppuVar1 == (undefined2 **)param_1[2]) {
    FUN_14000c2d0(param_1);
  }
  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[1] = puVar3;
  }
  param_1[1] = param_1[1] + 8;
  return puVar3;
}

