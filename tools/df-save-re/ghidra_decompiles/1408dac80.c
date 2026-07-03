// FUN_1408dac80 @ 1408dac80
// callees:
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000cb40 FUN_14000cb40
//   -> 1408cf0a0 FUN_1408cf0a0
//   -> 140071310 FUN_140071310
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a240 FUN_14014a240
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 14000c460 FUN_14000c460
//   -> 1401069c0 FUN_1401069c0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408dac80(longlong *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  void *pvVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined2 uVar21;
  int iVar22;
  undefined1 auStack_e8 [32];
  undefined2 local_c8 [4];
  longlong local_c0;
  uint local_b8;
  int local_b4;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  ulonglong local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  uVar18 = (ulonglong)(int)param_2;
  iVar22 = -1;
  local_b4 = -1;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a0 = param_2;
  local_9c = param_3;
  if ((int)param_2 < param_3) {
    do {
      plVar16 = local_b0;
      local_a0 = param_2;
      local_98 = uVar18;
      if ((ulonglong)(local_b0[1] - *local_b0 >> 3) <= (ulonglong)(longlong)(int)param_2) break;
      lVar15 = *(longlong *)(*local_b0 + uVar18 * 8);
      FUN_14007b5f0(local_68,lVar15,&DAT_140e7aaf8);
      FUN_14000cb40(local_68,lVar15 + 0x1a8,0,0xffffffffffffffff);
      FUN_1408cf0a0(lVar15 + 0x1a8,local_68,param_2);
      iVar22 = (int)(*(longlong *)(lVar15 + 0x70) - *(longlong *)(lVar15 + 0x68) >> 1) + -1;
      if (-1 < iVar22) {
        local_c0 = (longlong)iVar22 * 8;
        lVar19 = (longlong)iVar22 * 2;
        local_a8 = lVar19;
        do {
          uVar4 = *(undefined8 *)(local_c0 + *(longlong *)(lVar15 + 0x50));
          iVar14 = (int)(plVar16[1] - *plVar16 >> 3) + -1;
          if (-1 < iVar14) {
            lVar12 = (longlong)iVar14;
            puVar13 = (undefined8 *)(*plVar16 + lVar12 * 8);
            do {
              iVar10 = FUN_140071310(*puVar13,uVar4);
              if (iVar10 == 0) {
                if (iVar14 != -1) {
                  *(short *)(lVar19 + *(longlong *)(lVar15 + 0x68)) = (short)iVar14;
                  lVar12 = local_a8;
                  goto LAB_1408dae9a;
                }
                break;
              }
              iVar14 = iVar14 + -1;
              puVar13 = puVar13 + -1;
              lVar12 = lVar12 + -1;
            } while (-1 < lVar12);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          FUN_14000c8b0(&local_88,lVar15,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_88,": Smelt Ore Not Found, Token - ",0x1f);
          FUN_14000cb40(&local_88,*(undefined8 *)(local_c0 + *(longlong *)(lVar15 + 0x50)),0,
                        0xffffffffffffffff);
          FUN_14014a240(&local_88);
          lVar12 = local_a8;
          pvVar11 = (void *)(*(longlong *)(lVar15 + 0x68) + local_a8);
          pvVar1 = (void *)((longlong)pvVar11 + 2);
          memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0x70) - (longlong)pvVar1);
          *(longlong *)(lVar15 + 0x70) = *(longlong *)(lVar15 + 0x70) + -2;
          pvVar11 = (void *)(*(longlong *)(lVar15 + 0x80) + lVar12);
          pvVar1 = (void *)((longlong)pvVar11 + 2);
          memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0x88) - (longlong)pvVar1);
          *(longlong *)(lVar15 + 0x88) = *(longlong *)(lVar15 + 0x88) + -2;
          if (0xf < local_70) {
            FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1);
          }
LAB_1408dae9a:
          local_a8 = lVar12 + -2;
          lVar19 = lVar19 + -2;
          local_c0 = local_c0 + -8;
          iVar22 = iVar22 + -1;
          plVar16 = local_b0;
        } while (-1 < iVar22);
      }
      FUN_140051e20(lVar15 + 0x50);
      if ((*(longlong *)(lVar15 + 0x70) - *(longlong *)(lVar15 + 0x68) >> 1 != 0) &&
         (1 < *(int *)(lVar15 + 0x40))) {
        pbVar2 = (byte *)(*(longlong *)(lVar15 + 0x38) + 1);
        *pbVar2 = *pbVar2 | 2;
      }
      iVar22 = (int)(*(longlong *)(lVar15 + 0xb8) - *(longlong *)(lVar15 + 0xb0) >> 1) + -1;
      if (-1 < iVar22) {
        local_a8 = (longlong)iVar22 * 8;
        lVar19 = (longlong)iVar22 * 2;
        local_c0 = lVar19;
        do {
          uVar4 = *(undefined8 *)(local_a8 + *(longlong *)(lVar15 + 0x98));
          iVar14 = (int)(plVar16[1] - *plVar16 >> 3) + -1;
          if (-1 < iVar14) {
            lVar12 = (longlong)iVar14;
            puVar13 = (undefined8 *)(*plVar16 + lVar12 * 8);
            do {
              iVar10 = FUN_140071310(*puVar13,uVar4);
              if (iVar10 == 0) {
                if (iVar14 != -1) {
                  *(short *)(lVar19 + *(longlong *)(lVar15 + 0xb0)) = (short)iVar14;
                  lVar12 = local_c0;
                  goto LAB_1408db04e;
                }
                break;
              }
              iVar14 = iVar14 + -1;
              puVar13 = puVar13 + -1;
              lVar12 = lVar12 + -1;
            } while (-1 < lVar12);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          FUN_14000c8b0(&local_88,lVar15,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_88,": Thread Metal Ore Not Found, Token - ",0x26);
          FUN_14000cb40(&local_88,*(undefined8 *)(local_a8 + *(longlong *)(lVar15 + 0x98)),0);
          FUN_14014a240(&local_88);
          lVar12 = local_c0;
          pvVar11 = (void *)(*(longlong *)(lVar15 + 0xb0) + local_c0);
          pvVar1 = (void *)((longlong)pvVar11 + 2);
          memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0xb8) - (longlong)pvVar1);
          *(longlong *)(lVar15 + 0xb8) = *(longlong *)(lVar15 + 0xb8) + -2;
          pvVar11 = (void *)(*(longlong *)(lVar15 + 200) + lVar12);
          pvVar1 = (void *)((longlong)pvVar11 + 2);
          memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0xd0) - (longlong)pvVar1);
          *(longlong *)(lVar15 + 0xd0) = *(longlong *)(lVar15 + 0xd0) + -2;
          if (0xf < local_70) {
            FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1);
          }
LAB_1408db04e:
          local_c0 = lVar12 + -2;
          lVar19 = lVar19 + -2;
          local_a8 = local_a8 + -8;
          iVar22 = iVar22 + -1;
          plVar16 = local_b0;
        } while (-1 < iVar22);
      }
      FUN_140051e20(lVar15 + 0x98);
      if ((*(longlong *)(lVar15 + 0xb8) - *(longlong *)(lVar15 + 0xb0) >> 1 != 0) &&
         (1 < *(int *)(lVar15 + 0x40))) {
        pbVar2 = (byte *)(*(longlong *)(lVar15 + 0x38) + 1);
        *pbVar2 = *pbVar2 | 0x80;
      }
      puVar13 = *(undefined8 **)(lVar15 + 0xf8);
      puVar5 = *(undefined8 **)(lVar15 + 0x100);
      if (puVar13 < puVar5) {
        puVar3 = (ulonglong *)(lVar15 + 0x110);
        do {
          iVar22 = (int)(local_b0[1] - *local_b0 >> 3) + -1;
          if (-1 < iVar22) {
            lVar19 = (longlong)iVar22;
            puVar20 = (undefined8 *)(*local_b0 + lVar19 * 8);
            do {
              iVar14 = FUN_140071310(*puVar20,*puVar13);
              if (iVar14 == 0) {
                if (iVar22 != -1) {
                  uVar21 = (undefined2)iVar22;
                  puVar6 = *(undefined2 **)(lVar15 + 0x118);
                  local_c8[0] = uVar21;
                  if ((local_c8 < puVar6) && (puVar7 = (undefined2 *)*puVar3, puVar7 <= local_c8)) {
                    if (puVar6 == *(undefined2 **)(lVar15 + 0x120)) {
                      FUN_14000c460(puVar3,1);
                    }
                    if (*(undefined2 **)(lVar15 + 0x118) != (undefined2 *)0x0) {
                      **(undefined2 **)(lVar15 + 0x118) =
                           *(undefined2 *)
                            (*puVar3 + ((longlong)local_c8 - (longlong)puVar7 >> 1) * 2);
                    }
                    *(longlong *)(lVar15 + 0x118) = *(longlong *)(lVar15 + 0x118) + 2;
                  }
                  else {
                    if (puVar6 == *(undefined2 **)(lVar15 + 0x120)) {
                      FUN_14000c460(puVar3,1);
                    }
                    if (*(undefined2 **)(lVar15 + 0x118) != (undefined2 *)0x0) {
                      **(undefined2 **)(lVar15 + 0x118) = uVar21;
                    }
                    *(longlong *)(lVar15 + 0x118) = *(longlong *)(lVar15 + 0x118) + 2;
                  }
                  goto LAB_1408db27e;
                }
                break;
              }
              iVar22 = iVar22 + -1;
              puVar20 = puVar20 + -1;
              lVar19 = lVar19 + -1;
            } while (-1 < lVar19);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          FUN_14000c8b0(&local_88,lVar15,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_88,": Environment Spec Stone Not Found, Token - ");
          FUN_14000cb40(&local_88,*puVar13,0,0xffffffffffffffff);
          FUN_14014a240(&local_88);
          local_c8[0] = 0xffff;
          puVar6 = *(undefined2 **)(lVar15 + 0x118);
          if ((local_c8 < puVar6) && (puVar7 = (undefined2 *)*puVar3, puVar7 <= local_c8)) {
            if (puVar6 == *(undefined2 **)(lVar15 + 0x120)) {
              FUN_14000c460(puVar3,1);
            }
            if (*(undefined2 **)(lVar15 + 0x118) != (undefined2 *)0x0) {
              **(undefined2 **)(lVar15 + 0x118) =
                   *(undefined2 *)(*puVar3 + ((longlong)local_c8 - (longlong)puVar7 >> 1) * 2);
            }
          }
          else {
            if (puVar6 == *(undefined2 **)(lVar15 + 0x120)) {
              FUN_14000c460(puVar3,1);
            }
            if (*(undefined2 **)(lVar15 + 0x118) != (undefined2 *)0x0) {
              **(undefined2 **)(lVar15 + 0x118) = 0xffff;
            }
          }
          *(longlong *)(lVar15 + 0x118) = *(longlong *)(lVar15 + 0x118) + 2;
          if (0xf < local_70) {
            FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1);
          }
LAB_1408db27e:
          puVar13 = puVar13 + 1;
        } while (puVar13 < puVar5);
      }
      iVar22 = (int)(*(longlong *)(lVar15 + 0x100) - *(longlong *)(lVar15 + 0xf8) >> 3) + -1;
      if (-1 < iVar22) {
        lVar12 = (longlong)iVar22;
        lVar19 = lVar12 * 2;
        do {
          if (*(short *)(lVar19 + *(longlong *)(lVar15 + 0x110)) == -1) {
            pvVar11 = (void *)(*(longlong *)(lVar15 + 0x110) + lVar12 * 2);
            pvVar1 = (void *)((longlong)pvVar11 + 2);
            memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0x118) - (longlong)pvVar1);
            *(longlong *)(lVar15 + 0x118) = *(longlong *)(lVar15 + 0x118) + -2;
            pvVar11 = (void *)(*(longlong *)(lVar15 + 0x128) + lVar12 * 2);
            pvVar1 = (void *)((longlong)pvVar11 + 2);
            memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0x130) - (longlong)pvVar1);
            *(longlong *)(lVar15 + 0x130) = *(longlong *)(lVar15 + 0x130) + -2;
            pvVar11 = (void *)(*(longlong *)(lVar15 + 0x140) + lVar12);
            pvVar1 = (void *)((longlong)pvVar11 + 1);
            memmove(pvVar11,pvVar1,*(longlong *)(lVar15 + 0x148) - (longlong)pvVar1);
            *(longlong *)(lVar15 + 0x148) = *(longlong *)(lVar15 + 0x148) + -1;
          }
          lVar12 = lVar12 + -1;
          lVar19 = lVar19 + -2;
          iVar22 = iVar22 + -1;
        } while (-1 < iVar22);
      }
      FUN_140051e20((longlong *)(lVar15 + 0xf8));
      iVar22 = *(int *)(lVar15 + 0x430);
      if ((0 < iVar22) && ((local_b4 == -1 || (iVar22 < local_b4)))) {
        local_b4 = iVar22;
      }
      iVar22 = local_b4;
      if (0xf < local_50) {
        FUN_140002020(local_68[0],local_50 + 1,1);
      }
      param_2 = local_a0 + 1;
      uVar18 = local_98 + 1;
      local_a0 = param_2;
      local_98 = uVar18;
    } while ((int)param_2 < local_9c);
    uVar18 = (ulonglong)local_b8;
    if (iVar22 != -1) goto LAB_1408db3af;
  }
  iVar22 = 1;
LAB_1408db3af:
  if ((ulonglong)(longlong)(int)uVar18 < (ulonglong)(local_b0[1] - *local_b0 >> 3)) {
    lVar15 = (longlong)(int)uVar18 * 8;
    do {
      plVar16 = local_b0;
      uVar17 = (uint)uVar18;
      lVar19 = *(longlong *)(lVar15 + *local_b0);
      if (*(int *)(lVar19 + 0x430) <= iVar22 * 3) {
        plVar8 = (longlong *)local_b0[4];
        local_c0 = lVar19;
        if ((&local_c0 < plVar8) && (plVar9 = (longlong *)local_b0[3], plVar9 <= &local_c0)) {
          if (plVar8 == (longlong *)local_b0[5]) {
            FUN_1401069c0(local_b0 + 3);
            uVar17 = local_b8;
          }
          if ((undefined8 *)plVar16[4] != (undefined8 *)0x0) {
            *(undefined8 *)plVar16[4] =
                 *(undefined8 *)(plVar16[3] + ((longlong)&local_c0 - (longlong)plVar9 >> 3) * 8);
          }
        }
        else {
          if (plVar8 == (longlong *)local_b0[5]) {
            FUN_1401069c0(local_b0 + 3);
            uVar17 = local_b8;
          }
          if ((longlong *)plVar16[4] != (longlong *)0x0) {
            *(longlong *)plVar16[4] = lVar19;
          }
        }
        plVar16[4] = plVar16[4] + 8;
      }
      local_b8 = uVar17 + 1;
      uVar18 = (ulonglong)local_b8;
      lVar15 = lVar15 + 8;
    } while ((ulonglong)(longlong)(int)local_b8 < (ulonglong)(local_b0[1] - *local_b0 >> 3));
  }
  return;
}

