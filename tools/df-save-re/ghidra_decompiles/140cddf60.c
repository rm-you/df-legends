// FUN_140cddf60 @ 140cddf60
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140010740 FUN_140010740
//   -> 140050070 FUN_140050070
//   -> 140cdde90 FUN_140cdde90
//   -> 14000c2d0 FUN_14000c2d0


void FUN_140cddf60(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong local_res10;
  
  lVar16 = 500;
  puVar8 = *(undefined8 **)(param_1 + 0x1c0);
  puVar3 = *(undefined8 **)(param_1 + 0x1c8);
  bVar5 = false;
  local_res10 = param_2;
  while( true ) {
    if (puVar3 <= puVar8) goto LAB_140cde2b1;
    iVar6 = (**(code **)(*(longlong *)*puVar8 + 0x10))();
    if (iVar6 == 3) break;
    puVar8 = puVar8 + 1;
  }
  lVar7 = (**(code **)(*(longlong *)*puVar8 + 0x48))();
  if (lVar7 == 0) goto LAB_140cde2b1;
  uVar15 = 0;
  if (((DAT_1410b67dc == 1) && (0 < *(int *)(lVar7 + 0x60))) &&
     ((**(byte **)(lVar7 + 0x58) & 1) != 0)) {
    if (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) == 0) {
      puVar8 = operator_new(0x68);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      *(undefined8 **)(*(longlong *)(lVar7 + 0x10) + 0x130) = puVar8;
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x40) == 0) {
      pvVar9 = operator_new(0x170);
      uVar10 = FUN_140010740(pvVar9);
      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x40) = uVar10;
    }
    FUN_140050070(*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x40) + 0x50,
                  &local_res10);
    uVar2 = *(uint *)(param_1 + 0x1268);
    if (uVar2 < 500) {
      puVar8 = &DAT_141c70ac4 + (longlong)(int)uVar2 * 0xfa;
      lVar11 = 500;
      puVar12 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar2 * 4);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 500;
        *(undefined4 *)puVar8 = 0xffffffff;
        puVar8 = (undefined8 *)((longlong)puVar8 + 4);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    bVar5 = true;
    param_2 = local_res10;
  }
  if (((*(int *)(param_2 + 8) == 0) && ((*(byte *)(param_2 + 0x14) & 1) == 0)) &&
     ((lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130), lVar11 != 0 &&
      (lVar11 = *(longlong *)(lVar11 + 0x60), lVar11 != 0)))) {
    if (*(int *)(param_3 + 0x70) != -1) {
      FUN_140cdde90(lVar11,param_3 + 0x70);
    }
    if (*(int *)(param_3 + 0x30) != -1) {
      FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60),
                    param_3 + 0x30);
    }
    if (*(int *)(param_3 + 0xa8) != -1) {
      FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60));
    }
    iVar6 = *(int *)(param_3 + 4);
    if (iVar6 == 6) {
      plVar13 = *(longlong **)(*(longlong *)(param_3 + 0x110) + 8);
      plVar4 = *(longlong **)(*(longlong *)(param_3 + 0x110) + 0x10);
      uVar14 = (ulonglong)((longlong)plVar4 + (7 - (longlong)plVar13)) >> 3;
      if (plVar4 < plVar13) {
        uVar14 = uVar15;
      }
      if (uVar14 != 0) {
        do {
          if (*(int *)(*plVar13 + 8) != -1) {
            FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60)
                         );
          }
          plVar13 = plVar13 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar14);
      }
    }
    else if (iVar6 == 7) {
      if (*(int *)(*(longlong *)(param_3 + 0x110) + 8) != -1) {
        FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60));
      }
      if (*(int *)(*(longlong *)(param_3 + 0x110) + 0x30) != -1) {
        FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60));
      }
    }
    else if (iVar6 == 8) {
      if (*(int *)(*(longlong *)(param_3 + 0x110) + 8) != -1) {
        FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60));
      }
      if (*(int *)(*(longlong *)(param_3 + 0x110) + 0x30) != -1) {
        FUN_140cdde90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x130) + 0x60));
      }
    }
  }
  if (!bVar5) {
LAB_140cde2b1:
    puVar1 = (ulonglong *)(param_1 + 0xd98);
    plVar13 = *(longlong **)(param_1 + 0xda0);
    if ((&local_res10 < plVar13) && (plVar4 = (longlong *)*puVar1, plVar4 <= &local_res10)) {
      if (plVar13 == *(longlong **)(param_1 + 0xda8)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(undefined8 **)(param_1 + 0xda0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xda0) =
             *(undefined8 *)(*puVar1 + ((longlong)&local_res10 - (longlong)plVar4 >> 3) * 8);
      }
    }
    else {
      if (plVar13 == *(longlong **)(param_1 + 0xda8)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(longlong **)(param_1 + 0xda0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xda0) = param_2;
      }
    }
    *(longlong *)(param_1 + 0xda0) = *(longlong *)(param_1 + 0xda0) + 8;
  }
  uVar2 = *(uint *)(param_1 + 0x1268);
  if (uVar2 < 500) {
    puVar8 = &DAT_141c70ac4 + (longlong)(int)uVar2 * 0xfa;
    puVar12 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar2 * 4);
    do {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 500;
      *(undefined4 *)puVar8 = 0xffffffff;
      puVar8 = (undefined8 *)((longlong)puVar8 + 4);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

