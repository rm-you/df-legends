// FUN_140915940 @ 140915940
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140915c20 FUN_140915c20
//   -> 140914ff0 FUN_140914ff0


void FUN_140915940(ulonglong *param_1)

{
  uint **ppuVar1;
  uint **ppuVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *local_res10;
  
  uVar3 = FUN_1409fc0c0();
  uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1d) +
          2;
  if (uVar3 != 0) {
    uVar6 = (ulonglong)uVar3;
    do {
      uVar3 = FUN_1409fc0c0();
      uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x3e0f83f;
      for (plVar4 = (longlong *)*param_1; plVar4 < (longlong *)param_1[1]; plVar4 = plVar4 + 1) {
        puVar5 = (uint *)*plVar4;
        if (*puVar5 == uVar3) {
          puVar5[1] = puVar5[1] * 2;
          if (*(int *)(*plVar4 + 4) < -0x32) {
            *(undefined4 *)(*plVar4 + 4) = 0xffffffce;
          }
          if (0x32 < *(int *)(*plVar4 + 4)) {
            *(undefined4 *)(*plVar4 + 4) = 0x32;
          }
          goto LAB_140915bd3;
        }
      }
      if (uVar3 != 0xffffffff) {
        puVar5 = operator_new(8);
        puVar5[1] = 0;
        *puVar5 = uVar3;
        local_res10 = puVar5;
        uVar3 = FUN_1409fc0c0();
        if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x2aaaaaab == 0) {
          uVar3 = FUN_1409fc0c0();
          if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x2aaaaaab == 0) {
            uVar3 = FUN_1409fc0c0();
            uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff)
                    / 0x1446f87 - 0x32;
          }
          else {
            uVar3 = FUN_1409fc0c0();
            uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff)
                    / 0x1948b10 - 0x28;
          }
        }
        else {
          uVar3 = FUN_1409fc0c0();
          uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  0x2828283 - 0x19;
        }
        puVar5[1] = uVar3;
        ppuVar1 = (uint **)param_1[1];
        if ((&local_res10 < ppuVar1) && (ppuVar2 = (uint **)*param_1, ppuVar2 <= &local_res10)) {
          if (ppuVar1 == (uint **)param_1[2]) {
            FUN_14000c2d0(param_1,1);
          }
          if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[1] =
                 *(undefined8 *)(*param_1 + ((longlong)&local_res10 - (longlong)ppuVar2 >> 3) * 8);
          }
        }
        else {
          if (ppuVar1 == (uint **)param_1[2]) {
            FUN_14000c2d0(param_1,1);
          }
          if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[1] = puVar5;
          }
        }
        param_1[1] = param_1[1] + 8;
      }
LAB_140915bd3:
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140915c20(param_1);
  if (DAT_1410b67dc != 3) {
    FUN_140914ff0(param_1);
    return;
  }
  return;
}

