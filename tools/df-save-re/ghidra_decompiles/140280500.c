// FUN_140280500 @ 140280500
// callees:
//   -> 140071310 FUN_140071310
//   -> 140dfb5c4 operator_new
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14047b0c0 FUN_14047b0c0
//   -> 140050410 FUN_140050410


void FUN_140280500(ulonglong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *local_res8;
  undefined8 uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  uVar3 = *param_1;
  iVar9 = (int)((longlong)(param_1[1] - uVar3) >> 3) + -1;
  if (-1 < iVar9) {
    lVar11 = (longlong)iVar9;
    plVar10 = (longlong *)(uVar3 + lVar11 * 8);
    do {
      iVar6 = FUN_140071310(*plVar10 + 8,param_2);
      if (iVar6 == 0) {
        *param_3 = **(undefined4 **)(uVar3 + (longlong)iVar9 * 8);
        return;
      }
      iVar9 = iVar9 + -1;
      plVar10 = plVar10 + -1;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  uVar2 = *param_3;
  puVar7 = operator_new(0x30);
  puVar1 = (undefined8 *)(puVar7 + 2);
  *(undefined8 *)(puVar7 + 8) = 0xf;
  *(undefined8 *)(puVar7 + 6) = 0;
  puVar8 = puVar1;
  if (0xf < *(ulonglong *)(puVar7 + 8)) {
    puVar8 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar8 = 0;
  if (puVar1 != param_2) {
    local_res8 = puVar7;
    FUN_14000c8b0(puVar1,param_2,0,0xffffffffffffffff,uVar12);
  }
  *(undefined1 *)(puVar7 + 10) = 0x40;
  *puVar7 = uVar2;
  puVar7[0xb] = 0;
  local_res8 = puVar7;
  FUN_14047b0c0(puVar7);
  ppuVar4 = (undefined4 **)param_1[1];
  if ((&local_res8 < ppuVar4) && (ppuVar5 = (undefined4 **)*param_1, ppuVar5 <= &local_res8)) {
    if (ppuVar4 == (undefined4 **)param_1[2]) {
      FUN_140050410(param_1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] =
           *(undefined8 *)(*param_1 + ((longlong)&local_res8 - (longlong)ppuVar5 >> 3) * 8);
    }
  }
  else {
    if (ppuVar4 == (undefined4 **)param_1[2]) {
      FUN_140050410(param_1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] = puVar7;
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}

