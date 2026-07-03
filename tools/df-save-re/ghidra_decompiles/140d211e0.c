// FUN_140d211e0 @ 140d211e0
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140c859b0 FUN_140c859b0
//   -> 140de2250 FUN_140de2250
//   -> 1408a75e0 FUN_1408a75e0
//   -> 1401a9830 FUN_1401a9830
//   -> 1405bd990 FUN_1405bd990
//   -> 140cf1960 FUN_140cf1960
//   -> 140824a40 FUN_140824a40
//   -> 140c9c6b0 FUN_140c9c6b0
//   -> 1409fbf80 FUN_1409fbf80
//   -> 1405b24f0 FUN_1405b24f0
//   -> 140475650 FUN_140475650
//   -> 140d1f7a0 FUN_140d1f7a0
//   -> 1405cc6c0 FUN_1405cc6c0
//   -> 140d1eca0 FUN_140d1eca0
//   -> 140d20020 FUN_140d20020
//   -> 140097ad0 FUN_140097ad0
//   -> 140dfb5b4 free
//   -> 140ac9040 FUN_140ac9040
//   -> 14078a230 FUN_14078a230
//   -> 1405d7b30 FUN_1405d7b30
//   -> 140a5f530 FUN_140a5f530
//   -> 140ceec60 FUN_140ceec60
//   -> 1405bd250 FUN_1405bd250
//   -> 1405b58c0 FUN_1405b58c0
//   -> 1405cfc40 FUN_1405cfc40
//   -> 1405d5060 FUN_1405d5060
//   -> 140b0d980 FUN_140b0d980
//   -> 140c41a40 FUN_140c41a40
//   -> 140b85860 FUN_140b85860
//   -> 140d1db30 FUN_140d1db30
//   -> 1405d0dc0 FUN_1405d0dc0
//   -> 1405cd7c0 FUN_1405cd7c0
//   -> 1405ca730 FUN_1405ca730
//   -> 1405cd100 FUN_1405cd100
//   -> 140ced130 FUN_140ced130
//   -> 1405c8d80 FUN_1405c8d80
//   -> 1405cfd30 FUN_1405cfd30
//   -> 140819cb0 FUN_140819cb0
//   -> 140496f80 FUN_140496f80
//   -> 1405d0340 FUN_1405d0340
//   -> 140c15090 FUN_140c15090
//   -> 1405c73a0 FUN_1405c73a0
//   -> 14001b620 FUN_14001b620
//   -> 14007af10 FUN_14007af10
//   -> 1407ea070 FUN_1407ea070
//   -> 140df4ab0 FUN_140df4ab0
//   -> 1407d43b0 FUN_1407d43b0
//   -> 1407d6240 FUN_1407d6240
//   -> 140140de0 FUN_140140de0
//   -> 140073930 FUN_140073930
//   -> 1400b5f70 FUN_1400b5f70
//   -> 1400b7a90 FUN_1400b7a90
//   -> 140142440 FUN_140142440
//   -> 140072a80 FUN_140072a80
//   -> 14098cf20 FUN_14098cf20
//   -> 1408ff8a0 FUN_1408ff8a0
//   -> 140143780 FUN_140143780
//   -> 140b84d40 FUN_140b84d40
//   -> 140b84290 FUN_140b84290
//   -> 14090fba0 FUN_14090fba0
//   -> 1400bf170 FUN_1400bf170
//   -> 1407d53f0 FUN_1407d53f0
//   -> 140149b50 FUN_140149b50
//   -> 140d1fb80 FUN_140d1fb80
//   -> 140d1eaa0 FUN_140d1eaa0
//   -> 140d1ebe0 FUN_140d1ebe0
//   -> 140d1eda0 FUN_140d1eda0
//   -> 1404bbf00 FUN_1404bbf00
//   -> 140a38570 FUN_140a38570
//   -> 140d1eef0 FUN_140d1eef0
//   -> 140d1e9b0 FUN_140d1e9b0
//   -> 1408b8ff0 FUN_1408b8ff0
//   -> 1405d7110 FUN_1405d7110
//   -> 1405d7560 FUN_1405d7560


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d211e0(longlong param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  short local_res8 [4];
  short local_res10 [4];
  short local_res18 [4];
  
  iVar6 = (int)(*(longlong *)(param_1 + 0x13b80) - *(longlong *)(param_1 + 0x13b78) >> 3) + -1;
  lVar11 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if (param_2 == 1) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x13b78) + lVar11 * 8);
        local_res10[0] = -30000;
        if ((*(uint *)(lVar7 + 0x110) & 0x2000000) == 0) {
          local_res10[0] = *(short *)(lVar7 + 0xa8);
          local_res8[0] = *(short *)(lVar7 + 0xaa);
          local_res18[0] = *(short *)(lVar7 + 0xac);
        }
        else {
          puVar8 = *(undefined8 **)(lVar7 + 0x1c0);
          puVar2 = *(undefined8 **)(lVar7 + 0x1c8);
          if (puVar2 <= puVar8) goto LAB_140d21347;
          do {
            iVar6 = (**(code **)(*(longlong *)*puVar8 + 0x10))();
            if ((iVar6 == 0xb) && (lVar7 = (**(code **)(*(longlong *)*puVar8 + 0x18))(), lVar7 != 0)
               ) {
              FUN_1408054d0(lVar7,local_res10,local_res8,local_res18);
              break;
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 < puVar2);
        }
        if (((((local_res10[0] < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)local_res10[0])) ||
             (local_res8[0] < 0)) ||
            ((*(int *)(param_1 + 0x1160e8) <= (int)local_res8[0] || (local_res18[0] < 0)))) ||
           ((*(int *)(param_1 + 0x1160ec) <= (int)local_res18[0] ||
            ((*(longlong *)(param_1 + 0x1160b0) == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 0x1160b0) + ((longlong)local_res10[0] >> 4) * 8) +
                 ((longlong)local_res8[0] >> 4) * 8) + (longlong)local_res18[0] * 8) == 0))))))
        goto LAB_140d21347;
      }
      else {
LAB_140d21347:
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x13b78) + lVar11 * 8) + 0x114);
        *puVar1 = *puVar1 | 0x100;
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x13b78) + lVar11 * 8) + 0x114);
        *puVar1 = *puVar1 | 0x200;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  FUN_140c859b0();
  uVar14 = 0;
  if (param_2 == 2) {
    plVar10 = *(longlong **)(param_1 + 0x111930);
    for (plVar13 = *(longlong **)(param_1 + 0x111928); plVar13 < plVar10; plVar13 = plVar13 + 1) {
      lVar11 = *plVar13;
      if (*(short *)(lVar11 + 4) == 5) {
        plVar9 = *(longlong **)(lVar11 + 8);
        uVar12 = (ulonglong)((longlong)*(longlong **)(lVar11 + 0x10) + (7 - (longlong)plVar9)) >> 3;
        if (*(longlong **)(lVar11 + 0x10) < plVar9) {
          uVar12 = uVar14;
        }
        uVar15 = uVar14;
        if (uVar12 != 0) {
          do {
            plVar3 = (longlong *)*plVar9;
            if ((*(byte *)((longlong)plVar3 + 0x14) & 1) == 0) {
              (**(code **)(*plVar3 + 0x40))(plVar3,0);
            }
            plVar9 = plVar9 + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar12);
        }
      }
    }
  }
  FUN_140de2250(param_1);
  if (param_2 == 1) {
    FUN_1408a75e0(param_1 + 0x1d208);
    FUN_1401a9830(param_1 + 0x1c928);
    FUN_1405bd990();
    FUN_140cf1960(param_1 + 0x1d3d0);
    FUN_140824a40(param_1 + 0x13ef8);
    FUN_140c9c6b0(param_1 + 0x13b60);
    FUN_1409fbf80(param_1 + 0x1c910);
    FUN_1405b24f0(param_1);
    FUN_140475650(param_1 + 0x228);
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x1d218) - *(longlong *)(param_1 + 0x1d210);
    while (lVar11 >> 3 != 0) {
      plVar10 = *(longlong **)
                 (*(longlong *)(param_1 + 0x1d210) +
                 (longlong)
                 ((int)(*(longlong *)(param_1 + 0x1d218) - *(longlong *)(param_1 + 0x1d210) >> 3) +
                 -1) * 8);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10,1);
      }
      lVar11 = *(longlong *)(param_1 + 0x1d218) - *(longlong *)(param_1 + 0x1d210);
    }
    lVar11 = *(longlong *)(param_1 + 0x1d240);
    lVar7 = *(longlong *)(param_1 + 0x1d248) - lVar11;
    while (lVar7 >> 3 != 0) {
      plVar10 = *(longlong **)(lVar11 + (longlong)((int)(lVar7 >> 3) + -1) * 8);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,1);
      }
      lVar11 = *(longlong *)(param_1 + 0x1d240);
      lVar7 = *(longlong *)(param_1 + 0x1d248) - lVar11;
    }
    FUN_140d1f7a0(param_1 + 0x1c928);
    plVar10 = *(longlong **)(param_1 + 0x1c920);
    while (plVar10 != (longlong *)0x0) {
      plVar10 = (longlong *)*plVar10;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,1);
      }
      plVar10 = *(longlong **)(param_1 + 0x1c920);
    }
    FUN_1405cc6c0(param_1 + 0x14bd0);
    FUN_140d1eca0(param_1 + 0x13ef8);
    FUN_140d20020(param_1);
    if (param_2 == 0) {
      lVar11 = *(longlong *)(param_1 + 0x115de0);
      lVar7 = *(longlong *)(param_1 + 0x115de8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140097ad0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115de0);
        lVar7 = *(longlong *)(param_1 + 0x115de8) - lVar11;
      }
      if (*(longlong *)(param_1 + 0x119b60) != 0) {
        FUN_140ac9040();
      }
      FUN_14078a230(param_1 + 0x126bd8);
      puVar8 = (undefined8 *)(param_1 + 0x12b160);
      lVar11 = 0x150;
      do {
        puVar8[-0x7e0] = puVar8[-0x7e1];
        puVar8[-0x3f0] = puVar8[-0x3f1];
        *puVar8 = puVar8[-1];
        puVar8[0x3f0] = puVar8[0x3ef];
        puVar8[0x7e0] = puVar8[0x7df];
        puVar8[0xbd0] = puVar8[0xbcf];
        puVar8 = puVar8 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      FUN_1405d7b30(param_1 + 0x132f88);
      iVar6 = (int)(*(longlong *)(param_1 + 0x127248) - *(longlong *)(param_1 + 0x127240) >> 3) + -1
      ;
      lVar11 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          pvVar4 = *(void **)(*(longlong *)(param_1 + 0x127240) + lVar11 * 8);
          if (pvVar4 != (void *)0x0) {
            FUN_140a5f530(pvVar4);
            free(pvVar4);
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
      *(undefined8 *)(param_1 + 0x127248) = *(undefined8 *)(param_1 + 0x127240);
      plVar10 = *(longlong **)(param_1 + 0x119b00);
      uVar12 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x119b08) + (7 - (longlong)plVar10))
               >> 3;
      if (*(longlong **)(param_1 + 0x119b08) < plVar10) {
        uVar12 = uVar14;
      }
      uVar15 = uVar14;
      if (uVar12 != 0) {
        do {
          plVar13 = (longlong *)*plVar10;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x20))(plVar13,1);
          }
          plVar10 = plVar10 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
      }
      *(undefined8 *)(param_1 + 0x119b08) = *(undefined8 *)(param_1 + 0x119b00);
      *(undefined8 *)(param_1 + 0x119b20) = *(undefined8 *)(param_1 + 0x119b18);
      *(undefined8 *)(param_1 + 0x119b38) = *(undefined8 *)(param_1 + 0x119b30);
      *(undefined8 *)(param_1 + 0x119b50) = *(undefined8 *)(param_1 + 0x119b48);
      puVar8 = *(undefined8 **)(param_1 + 0x132f58);
      uVar12 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x132f60) + (7 - (longlong)puVar8))
               >> 3;
      if (*(undefined8 **)(param_1 + 0x132f60) < puVar8) {
        uVar12 = uVar14;
      }
      uVar15 = uVar14;
      if (uVar12 != 0) {
        do {
          free((void *)*puVar8);
          uVar15 = uVar15 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar15 < uVar12);
      }
      *(undefined8 *)(param_1 + 0x132f60) = *(undefined8 *)(param_1 + 0x132f58);
    }
    lVar11 = *(longlong *)(param_1 + 0x1d3d0);
    lVar7 = *(longlong *)(param_1 + 0x1d3d8) - lVar11;
    while (lVar7 >> 3 != 0) {
      pvVar4 = *(void **)(lVar11 + (longlong)((int)(lVar7 >> 3) + -1) * 8);
      if (pvVar4 != (void *)0x0) {
        FUN_140ceec60(pvVar4);
        free(pvVar4);
      }
      lVar11 = *(longlong *)(param_1 + 0x1d3d0);
      lVar7 = *(longlong *)(param_1 + 0x1d3d8) - lVar11;
    }
    FUN_1405bd250(param_1 + 0x11a750);
    FUN_1405b58c0(param_1);
    FUN_1405cfc40(param_1 + 0x228);
    FUN_1405d5060(param_1 + 600);
    *(undefined8 *)(param_1 + 0x1265d0) = *(undefined8 *)(param_1 + 0x1265c8);
    *(undefined8 *)(param_1 + 0x1265e8) = *(undefined8 *)(param_1 + 0x1265e0);
    FUN_140b0d980(param_1);
    lVar11 = *(longlong *)(param_1 + 0x13b80) - *(longlong *)(param_1 + 0x13b78);
    while (lVar11 >> 3 != 0) {
      pvVar4 = *(void **)(*(longlong *)(param_1 + 0x13b78) +
                         (longlong)
                         ((int)(*(longlong *)(param_1 + 0x13b80) - *(longlong *)(param_1 + 0x13b78)
                               >> 3) + -1) * 8);
      if (pvVar4 != (void *)0x0) {
        FUN_140c41a40(pvVar4);
        free(pvVar4);
      }
      lVar11 = *(longlong *)(param_1 + 0x13b80) - *(longlong *)(param_1 + 0x13b78);
    }
    lVar11 = *(longlong *)(param_1 + 0x111898);
    lVar7 = *(longlong *)(param_1 + 0x1118a0) - lVar11;
    while (lVar7 >> 3 != 0) {
      pvVar4 = *(void **)(lVar11 + (longlong)((int)(lVar7 >> 3) + -1) * 8);
      if (pvVar4 != (void *)0x0) {
        FUN_140b85860(pvVar4);
        free(pvVar4);
      }
      lVar11 = *(longlong *)(param_1 + 0x111898);
      lVar7 = *(longlong *)(param_1 + 0x1118a0) - lVar11;
    }
    lVar11 = *(longlong *)(param_1 + 0x270);
    lVar7 = *(longlong *)(param_1 + 0x278) - lVar11;
    while (lVar7 >> 3 != 0) {
      pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
      if (pvVar4 != (void *)0x0) {
        FUN_140d1db30(pvVar4);
        free(pvVar4);
      }
      lVar11 = *(longlong *)(param_1 + 0x270);
      lVar7 = *(longlong *)(param_1 + 0x278) - lVar11;
    }
    *(undefined4 *)(param_1 + 0x288) = 0;
    FUN_1405d0dc0(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x1266c8) = *(undefined8 *)(param_1 + 0x1266c0);
    if (param_2 == 0) {
      plVar10 = *(longlong **)(param_1 + 0x2b0);
      for (plVar13 = *(longlong **)(param_1 + 0x2a8); plVar13 < plVar10; plVar13 = plVar13 + 1) {
        puVar8 = *(undefined8 **)(*plVar13 + 200);
        puVar2 = *(undefined8 **)(*plVar13 + 0xd0);
        uVar12 = (ulonglong)((longlong)puVar2 + (7 - (longlong)puVar8)) >> 3;
        if (puVar2 < puVar8) {
          uVar12 = uVar14;
        }
        uVar15 = uVar14;
        if (uVar12 != 0) {
          do {
            puVar5 = (undefined4 *)*puVar8;
            puVar8 = puVar8 + 1;
            uVar15 = uVar15 + 1;
            *puVar5 = 0xffffffff;
          } while (uVar15 < uVar12);
        }
      }
      FUN_1405cd7c0(param_1 + 0x1c928);
      FUN_1405ca730(param_1 + 0x13ef8);
      FUN_1405cd100(param_1 + 0x13b60);
      lVar11 = *(longlong *)(param_1 + 0x13bf0);
      lVar7 = *(longlong *)(param_1 + 0x13bf8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + (longlong)((int)(lVar7 >> 3) + -1) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140ced130(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x13bf0);
        lVar7 = *(longlong *)(param_1 + 0x13bf8) - lVar11;
      }
      FUN_1405c8d80(param_1 + 0x13c08);
      FUN_1405cfd30(param_1 + 0x13c20);
      puVar8 = (undefined8 *)(param_1 + 0x13c98);
      *(undefined8 *)(param_1 + 0x13c40) = *(undefined8 *)(param_1 + 0x13c38);
      lVar11 = 0xf;
      *(undefined8 *)(param_1 + 0x13c58) = *(undefined8 *)(param_1 + 0x13c50);
      *(undefined8 *)(param_1 + 0x13c70) = *(undefined8 *)(param_1 + 81000);
      *(undefined8 *)(param_1 + 0x13c88) = *(undefined8 *)(param_1 + 0x13c80);
      do {
        puVar8[1] = *puVar8;
        puVar8 = puVar8 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      *(undefined8 *)(param_1 + 0x13e08) = *(undefined8 *)(param_1 + 0x13e00);
      *(undefined8 *)(param_1 + 0x13e20) = *(undefined8 *)(param_1 + 0x13e18);
      *(undefined8 *)(param_1 + 0x13e38) = *(undefined8 *)(param_1 + 0x13e30);
      *(undefined8 *)(param_1 + 0x13e50) = *(undefined8 *)(param_1 + 0x13e48);
      *(undefined8 *)(param_1 + 0x13e68) = *(undefined8 *)(param_1 + 0x13e60);
      *(undefined8 *)(param_1 + 0x13e80) = *(undefined8 *)(param_1 + 0x13e78);
      *(undefined8 *)(param_1 + 0x13e98) = *(undefined8 *)(param_1 + 0x13e90);
      *(undefined8 *)(param_1 + 0x13eb0) = *(undefined8 *)(param_1 + 0x13ea8);
      *(undefined8 *)(param_1 + 0x13ec8) = *(undefined8 *)(param_1 + 0x13ec0);
      lVar11 = *(longlong *)(param_1 + 0x14ba0);
      lVar7 = *(longlong *)(param_1 + 0x14ba8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140819cb0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x14ba0);
        lVar7 = *(longlong *)(param_1 + 0x14ba8) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x2a8);
      lVar7 = *(longlong *)(param_1 + 0x2b0) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140496f80(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x2a8);
        lVar7 = *(longlong *)(param_1 + 0x2b0) - lVar11;
      }
      FUN_1405d0340(param_1 + 0x240);
      *(undefined8 *)(param_1 + 0x26b878) = *(undefined8 *)(param_1 + 0x26b870);
      lVar11 = *(longlong *)(param_1 + 0x1118c8);
      lVar7 = *(longlong *)(param_1 + 0x1118d0) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140c15090(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x1118c8);
        lVar7 = *(longlong *)(param_1 + 0x1118d0) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x1118f8);
      lVar7 = *(longlong *)(param_1 + 0x111900) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1405c73a0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x1118f8);
        lVar7 = *(longlong *)(param_1 + 0x111900) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x111928);
      lVar7 = *(longlong *)(param_1 + 0x111930) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_14001b620(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x111928);
        lVar7 = *(longlong *)(param_1 + 0x111930) - lVar11;
      }
      FUN_14007af10(param_1 + 0x111958);
      lVar11 = *(longlong *)(param_1 + 0x115ca8);
      lVar7 = *(longlong *)(param_1 + 0x115cb0) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1407ea070(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115ca8);
        lVar7 = *(longlong *)(param_1 + 0x115cb0) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115cd8);
      lVar7 = *(longlong *)(param_1 + 0x115ce0) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140df4ab0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115cd8);
        lVar7 = *(longlong *)(param_1 + 0x115ce0) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115d08);
      lVar7 = *(longlong *)(param_1 + 0x115d10) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1407d43b0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115d08);
        lVar7 = *(longlong *)(param_1 + 0x115d10) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115d38);
      lVar7 = *(longlong *)(param_1 + 0x115d40) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1407d6240(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115d38);
        lVar7 = *(longlong *)(param_1 + 0x115d40) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115d68);
      lVar7 = *(longlong *)(param_1 + 0x115d70) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140140de0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115d68);
        lVar7 = *(longlong *)(param_1 + 0x115d70) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115d98);
      lVar7 = *(longlong *)(param_1 + 0x115da0) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140073930(pvVar4,&DAT_141d69220);
          FUN_140073930(pvVar4,&DAT_141d69208);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115d98);
        lVar7 = *(longlong *)(param_1 + 0x115da0) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115e10);
      lVar7 = *(longlong *)(param_1 + 0x115e18) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1400b5f70(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115e10);
        lVar7 = *(longlong *)(param_1 + 0x115e18) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115e40);
      lVar7 = *(longlong *)(param_1 + 0x115e48) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1400b7a90(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115e40);
        lVar7 = *(longlong *)(param_1 + 0x115e48) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115e70);
      lVar7 = *(longlong *)(param_1 + 0x115e78) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140142440(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115e70);
        lVar7 = *(longlong *)(param_1 + 0x115e78) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115ea0);
      lVar7 = *(longlong *)(param_1 + 0x115ea8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140072a80(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115ea0);
        lVar7 = *(longlong *)(param_1 + 0x115ea8) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115ed0);
      lVar7 = *(longlong *)(param_1 + 0x115ed8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_14098cf20(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115ed0);
        lVar7 = *(longlong *)(param_1 + 0x115ed8) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115f00);
      lVar7 = *(longlong *)(param_1 + 0x115f08) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1408ff8a0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115f00);
        lVar7 = *(longlong *)(param_1 + 0x115f08) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115f30);
      lVar7 = *(longlong *)(param_1 + 0x115f38) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140143780(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115f30);
        lVar7 = *(longlong *)(param_1 + 0x115f38) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115f60);
      lVar7 = *(longlong *)(param_1 + 0x115f68) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140b84d40(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115f60);
        lVar7 = *(longlong *)(param_1 + 0x115f68) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115f90);
      lVar7 = *(longlong *)(param_1 + 0x115f98) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140b84290(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115f90);
        lVar7 = *(longlong *)(param_1 + 0x115f98) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115fc0);
      lVar7 = *(longlong *)(param_1 + 0x115fc8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_14090fba0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115fc0);
        lVar7 = *(longlong *)(param_1 + 0x115fc8) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x115ff0);
      lVar7 = *(longlong *)(param_1 + 0x115ff8) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1400bf170(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x115ff0);
        lVar7 = *(longlong *)(param_1 + 0x115ff8) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x116020);
      lVar7 = *(longlong *)(param_1 + 0x116028) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_1407d53f0(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x116020);
        lVar7 = *(longlong *)(param_1 + 0x116028) - lVar11;
      }
      lVar11 = *(longlong *)(param_1 + 0x116050);
      lVar7 = *(longlong *)(param_1 + 0x116058) - lVar11;
      while (lVar7 >> 3 != 0) {
        pvVar4 = *(void **)(lVar11 + -8 + (lVar7 >> 3) * 8);
        if (pvVar4 != (void *)0x0) {
          FUN_140149b50(pvVar4);
          free(pvVar4);
        }
        lVar11 = *(longlong *)(param_1 + 0x116050);
        lVar7 = *(longlong *)(param_1 + 0x116058) - lVar11;
      }
      DAT_14167e414 = 0;
      DAT_14155b300 = 0;
      DAT_14167eca8 = 0;
      DAT_14167ec50 = 0;
      DAT_141697474 = 0;
      DAT_14155b280 = 0;
      DAT_141699294 = 0;
      DAT_14167ec9c = 0;
      DAT_14167ec48 = 0;
      DAT_1416992ac = 0;
      DAT_141697468 = 0;
      DAT_141582928 = 0;
      DAT_14167e410 = 0;
      DAT_14155b288 = 0;
      DAT_14169746c = 0;
      DAT_14167ecac = 0;
      DAT_14155b29c = 0;
      DAT_141699280 = 0;
      DAT_14167ec78 = 0;
      DAT_14155b2cc = 0;
      DAT_1416b1978 = 0;
      DAT_14155b284 = 0;
      DAT_14167ec44 = 0;
      DAT_14167e40c = 0;
      DAT_14167edb4 = 0;
      DAT_1416992b4 = 0;
      DAT_14167ec40 = 0;
      DAT_141c2fd90 = 0;
      _DAT_1416b1984 = 0;
      DAT_1416b1970 = 0;
      DAT_141699298 = 0;
      DAT_1416b1988 = 0;
      DAT_141697464 = 0;
      DAT_14167edb8 = 0;
      DAT_14127ebbc = 0;
      DAT_14155b2c8 = 0;
      DAT_14167ec68 = 0;
      DAT_14155b304 = 0;
      DAT_1416992b8 = 0;
      DAT_14155b298 = 0;
      DAT_1416b197c = 0;
      FUN_140d1fb80(param_1 + 0x132f70);
      FUN_140d1eaa0(param_1 + 0x11a770);
      FUN_140d1ebe0(param_1 + 0x11a7a0);
      iVar6 = (int)(*(longlong *)(param_1 + 0x11a950) - *(longlong *)(param_1 + 0x11a948) >> 3) + -1
      ;
      lVar11 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x11a948) + lVar11 * 8);
          if (((0 < (int)plVar10[7]) && ((*(byte *)plVar10[6] & 1) != 0)) &&
             (plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,1);
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
      FUN_140d1eda0(param_1 + 0x11a8c0);
      iVar6 = (int)(*(longlong *)(param_1 + 0x11ad28) - *(longlong *)(param_1 + 0x11ad20) >> 3) + -1
      ;
      lVar11 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          pvVar4 = *(void **)(*(longlong *)(param_1 + 0x11ad20) + lVar11 * 8);
          if (((5 < *(int *)((longlong)pvVar4 + 0x3a8)) &&
              ((*(byte *)(*(longlong *)((longlong)pvVar4 + 0x3a0) + 5) & 0x10) != 0)) &&
             (pvVar4 != (void *)0x0)) {
            FUN_1404bbf00(pvVar4);
            free(pvVar4);
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
      iVar6 = (int)(*(longlong *)(param_1 + 0x1244d8) - *(longlong *)(param_1 + 0x1244d0) >> 3) + -1
      ;
      lVar11 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          pvVar4 = *(void **)(*(longlong *)(param_1 + 0x1244d0) + lVar11 * 8);
          if (((0 < *(int *)((longlong)pvVar4 + 0x48)) &&
              ((**(byte **)((longlong)pvVar4 + 0x40) & 8) != 0)) && (pvVar4 != (void *)0x0)) {
            FUN_140a38570(pvVar4);
            free(pvVar4);
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
      FUN_140d1eef0(param_1 + 0x124550);
      FUN_140d1e9b0(param_1 + 0x11ad38);
      FUN_1408b8ff0(param_1 + 0x124568);
      FUN_1405d7110(param_1 + 0x26ba60);
      FUN_1405d7560(param_1 + 0x26c678);
    }
    iVar6 = (int)(DAT_141c51308 - DAT_141c51300 >> 3) + -1;
    lVar11 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        free(*(void **)(DAT_141c51300 + lVar11 * 8));
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    DAT_141c51308 = DAT_141c51300;
    *(undefined8 *)(param_1 + 0x116080) = 0;
    *(undefined1 *)(param_1 + 0x11608a) = 0;
    *(undefined4 *)(param_1 + 0x26b7e4) = 1;
    *(undefined1 *)(param_1 + 0x26b7e8) = 1;
    *(undefined2 *)(param_1 + 0x26b7ea) = 1;
    *(undefined1 *)(param_1 + 0x26b7ec) = 1;
    *(undefined2 *)(param_1 + 0x1d200) = 0x101;
    *(undefined1 *)(param_1 + 0x132fa4) = 1;
    *(undefined4 *)(param_1 + 0x132fa0) = 0;
  }
  return;
}

