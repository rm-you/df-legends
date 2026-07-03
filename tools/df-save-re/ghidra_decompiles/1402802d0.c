// FUN_1402802d0 @ 1402802d0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050640 FUN_140050640
//   -> 14000c2d0 FUN_14000c2d0


void FUN_1402802d0(ulonglong *param_1,int param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *local_res8;
  undefined1 local_res18 [16];
  
  puVar3 = operator_new(0x20);
  *(undefined8 *)(puVar3 + 0x18) = 0xf;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = 0;
  local_res8 = puVar3;
  if (puVar3 != param_3) {
    FUN_14000c8b0(puVar3,param_3,0,0xffffffffffffffff);
  }
  ppuVar1 = (undefined1 **)param_1[1];
  ppuVar2 = (undefined1 **)*param_1;
  if ((ulonglong)(longlong)param_2 < (ulonglong)((longlong)ppuVar1 - (longlong)ppuVar2 >> 3)) {
    FUN_140050640(param_1,local_res18,ppuVar2 + param_2);
    return;
  }
  if ((&local_res8 < ppuVar1) && (ppuVar2 <= &local_res8)) {
    if (ppuVar1 == (undefined1 **)param_1[2]) {
      FUN_14000c2d0(param_1,1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] =
           *(undefined8 *)(*param_1 + ((longlong)&local_res8 - (longlong)ppuVar2 >> 3) * 8);
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
  return;
}

