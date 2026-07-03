// FUN_1401cc2e0 @ 1401cc2e0
// callees:
//   -> 140764cb0 FUN_140764cb0
//   -> 1407b5400 FUN_1407b5400
//   -> 140dfb5c4 operator_new
//   -> 1401b8820 FUN_1401b8820
//   -> 14000d840 FUN_14000d840
//   -> 14000c390 FUN_14000c390
//   -> 1400de3a0 FUN_1400de3a0
//   -> 14078e1d0 FUN_14078e1d0
//   -> 140914d80 FUN_140914d80
//   -> 14000c2d0 FUN_14000c2d0
//   -> 14053c3c0 FUN_14053c3c0
//   -> 1407d42d0 FUN_1407d42d0
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 14000c460 FUN_14000c460
//   -> 14000be20 FUN_14000be20
//   -> 1400025a0 FUN_1400025a0
//   -> 1402de540 FUN_1402de540
//   -> 14020fc80 FUN_14020fc80
//   -> 1400b3400 FUN_1400b3400
//   -> 140050340 FUN_140050340
//   -> 1408a4d70 FUN_1408a4d70
//   -> 1401b83c0 FUN_1401b83c0
//   -> 14061e7d0 FUN_14061e7d0
//   -> 140050b50 FUN_140050b50
//   -> 140082ad0 FUN_140082ad0
//   -> 1400025c0 FUN_1400025c0
//   -> 140002620 FUN_140002620
//   -> 1401b8440 FUN_1401b8440
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401cc2e0(longlong param_1,char param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  undefined2 uVar14;
  ulonglong *puVar15;
  undefined4 **ppuVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  short sVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  short sVar33;
  ulonglong uVar34;
  short sVar35;
  short sVar36;
  longlong lVar37;
  undefined4 uVar38;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_378 [32];
  undefined4 *local_340;
  undefined4 local_338 [2];
  undefined4 *local_330;
  undefined4 *puStack_328;
  undefined4 *local_320;
  undefined4 *local_318;
  undefined8 *local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined8 local_2a0;
  undefined1 local_298 [32];
  undefined1 local_278 [144];
  undefined1 local_1e8 [144];
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_2a0 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStackY_378;
  local_338[0] = CONCAT31(local_338[0]._1_3_,param_3);
  FUN_140764cb0();
  FUN_1407b5400(param_1);
  lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x60);
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58) == 0) {
    local_310 = operator_new(0x60);
    *local_310 = 0;
    local_310[1] = 0;
    local_310[2] = 0;
    local_310[3] = 0;
    local_310[4] = 0;
    local_310[5] = 0;
    local_310[7] = 0;
    local_310[8] = 0;
    local_310[9] = 0;
    *(undefined4 *)(local_310 + 6) = 0xffffffff;
    *(undefined4 *)(local_310 + 10) = 0;
    local_310[0xb] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x58) = local_310;
  }
  local_308 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58);
  iVar24 = -1;
  local_340 = (undefined4 *)CONCAT44(local_340._4_4_,0xffffffff);
  iVar26 = -1;
  if (*(longlong *)(lVar25 + 0x80) == 0) {
    local_310 = operator_new(0x130);
    puVar15 = (ulonglong *)FUN_1401b8820(local_310);
    *(ulonglong **)(lVar25 + 0x80) = puVar15;
    lVar18 = *(longlong *)(param_1 + 0x130);
    sVar12 = *(short *)(param_1 + 4);
    sVar35 = *(short *)(param_1 + 2);
    if (((sVar35 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar35)) ||
       (sVar12 < 0)) {
LAB_1401cc47d:
      if (((lVar18 != 0) &&
          ((lVar18 = *(longlong *)(lVar18 + 0x48), lVar18 != 0 &&
           ((*(uint *)(lVar18 + 0x4c) & 0x10000000) == 0)))) &&
         ((*(uint *)(lVar18 + 0x48) & 0x10000000) != 0)) goto LAB_1401cc4ad;
LAB_1401cc6df:
      if ((*(int *)(param_1 + 0x28) == -1) || (cVar11 = FUN_1400de3a0(param_1), cVar11 != '\0')) {
        plVar19 = *(longlong **)(param_1 + 0xe8);
        plVar6 = *(longlong **)(param_1 + 0xf0);
        if (plVar19 < plVar6) {
          do {
            sVar12 = (*(code *)**(undefined8 **)*plVar19)();
            if (sVar12 == 0) {
              iVar23 = *(int *)(*plVar19 + 8);
              lVar18 = DAT_141c53720 - DAT_141c53718 >> 3;
              if ((lVar18 == 0) || (iVar23 == -1)) break;
              iVar30 = 0;
              iVar21 = (int)lVar18 + -1;
              if (iVar21 < 0) break;
              while( true ) {
                iVar20 = iVar21 + iVar30 >> 1;
                psVar4 = *(short **)(DAT_141c53718 + (longlong)iVar20 * 8);
                iVar2 = *(int *)(psVar4 + 2);
                if (iVar2 == iVar23) break;
                if (iVar23 < iVar2) {
                  iVar21 = iVar20 + -1;
                }
                else {
                  iVar30 = iVar20 + 1;
                }
                if (iVar21 < iVar30) goto LAB_1401cc994;
              }
              if (psVar4 == (short *)0x0) break;
              if (*psVar4 == 7) {
                iVar24 = iVar2;
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < plVar6);
LAB_1401cc994:
          local_340 = (undefined4 *)CONCAT44(local_340._4_4_,iVar24);
        }
        lVar18 = FUN_14078e1d0(param_1,0xffffffff,&local_310,&local_318);
        if (lVar18 != 0) {
          iVar26 = *(int *)((longlong)local_310 + 4);
        }
        if (iVar24 == -1) {
          if (iVar26 == -1) goto LAB_1401ccdf1;
          uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x18);
          iVar26 = FUN_140914d80(uVar5,6);
          iVar23 = FUN_140914d80(uVar5,4);
          if (((-0xb < iVar26) && (10 < iVar23)) || (0x19 < iVar26)) {
            local_340._0_4_ = 0x50;
            puVar15 = *(ulonglong **)(lVar25 + 0x80);
            if ((&local_340 < (undefined4 **)puVar15[1]) &&
               (ppuVar16 = (undefined4 **)*puVar15, ppuVar16 <= &local_340)) {
              if (puVar15[1] == puVar15[2]) {
                FUN_14000c390(puVar15,1);
              }
              if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                *(undefined4 *)puVar15[1] =
                     *(undefined4 *)
                      (*puVar15 + ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
              }
            }
            else {
              if (puVar15[1] == puVar15[2]) {
                FUN_14000c390(puVar15,1);
              }
              if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                *(undefined4 *)puVar15[1] = 0x50;
              }
            }
            puVar15[1] = puVar15[1] + 4;
            lVar18 = *(longlong *)(lVar25 + 0x80);
            if (iVar23 < iVar26) {
              local_340._0_4_ = 6;
              if ((&local_340 < *(undefined4 ***)(lVar18 + 0x20)) &&
                 (ppuVar16 = *(undefined4 ***)(lVar18 + 0x18), ppuVar16 <= &local_340)) {
LAB_1401ccc25:
                if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
                  FUN_14000c390(lVar18 + 0x18,1);
                }
                if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
                  **(undefined4 **)(lVar18 + 0x20) =
                       *(undefined4 *)
                        (*(longlong *)(lVar18 + 0x18) +
                        ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
                }
              }
              else {
                if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
                  FUN_14000c390(lVar18 + 0x18,1);
                }
                if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
                  **(undefined4 **)(lVar18 + 0x20) = 6;
                }
              }
            }
            else {
              local_340._0_4_ = 4;
              if ((&local_340 < *(undefined4 ***)(lVar18 + 0x20)) &&
                 (ppuVar16 = *(undefined4 ***)(lVar18 + 0x18), ppuVar16 <= &local_340))
              goto LAB_1401ccc25;
              if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
                FUN_14000c390(lVar18 + 0x18,1);
              }
              if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar18 + 0x20) = 4;
              }
            }
            *(longlong *)(lVar18 + 0x20) = *(longlong *)(lVar18 + 0x20) + 4;
            local_340._0_4_ = 0xffffffff;
            lVar18 = *(longlong *)(lVar25 + 0x80);
            if ((&local_340 < *(undefined4 ***)(lVar18 + 0x38)) &&
               (ppuVar16 = *(undefined4 ***)(lVar18 + 0x30), ppuVar16 <= &local_340)) {
              if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
                FUN_14000c390(lVar18 + 0x30,1);
              }
              if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar18 + 0x38) =
                     *(undefined4 *)
                      (*(longlong *)(lVar18 + 0x30) +
                      ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
              }
            }
            else {
              if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
                FUN_14000c390(lVar18 + 0x30,1);
              }
              if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar18 + 0x38) = 0xffffffff;
              }
            }
            *(longlong *)(lVar18 + 0x38) = *(longlong *)(lVar18 + 0x38) + 4;
            local_340 = (undefined4 *)CONCAT44(local_340._4_4_,0xffffffff);
            lVar18 = *(longlong *)(lVar25 + 0x80);
            puVar15 = (ulonglong *)(lVar18 + 0x48);
            if ((&local_340 < *(undefined4 ***)(lVar18 + 0x50)) &&
               (ppuVar16 = (undefined4 **)*puVar15, ppuVar16 <= &local_340)) {
              if (*(longlong *)(lVar18 + 0x50) == *(longlong *)(lVar18 + 0x58)) {
                FUN_14000c390(puVar15,1);
              }
              if (*(undefined4 **)(lVar18 + 0x50) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar18 + 0x50) =
                     *(undefined4 *)
                      (*puVar15 + ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
              }
            }
            else {
              if (*(longlong *)(lVar18 + 0x50) == *(longlong *)(lVar18 + 0x58)) {
                FUN_14000c390(puVar15,1);
              }
              if (*(undefined4 **)(lVar18 + 0x50) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar18 + 0x50) = 0xffffffff;
              }
            }
            *(longlong *)(lVar18 + 0x50) = *(longlong *)(lVar18 + 0x50) + 4;
          }
          param_3 = (char)local_338[0];
          goto LAB_1401ccdf1;
        }
        local_338[0] = 0x4f;
        puVar15 = *(ulonglong **)(lVar25 + 0x80);
        if ((local_338 < (undefined4 *)puVar15[1]) &&
           (puVar17 = (undefined4 *)*puVar15, puVar17 <= local_338)) {
          if (puVar15[1] == puVar15[2]) {
            FUN_14000c390(puVar15,1);
          }
          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar15[1] =
                 *(undefined4 *)(*puVar15 + ((longlong)local_338 - (longlong)puVar17 >> 2) * 4);
          }
        }
        else {
          if (puVar15[1] == puVar15[2]) {
            FUN_14000c390(puVar15,1);
          }
          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar15[1] = 0x4f;
          }
        }
        puVar15[1] = puVar15[1] + 4;
        lVar18 = *(longlong *)(lVar25 + 0x80);
        if ((&local_340 < *(undefined4 ***)(lVar18 + 0x20)) &&
           (ppuVar16 = *(undefined4 ***)(lVar18 + 0x18), ppuVar16 <= &local_340)) {
          if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
            FUN_14000c390(lVar18 + 0x18,1);
          }
          if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar18 + 0x20) =
                 *(undefined4 *)
                  (*(longlong *)(lVar18 + 0x18) +
                  ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
          }
        }
        else {
          if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
            FUN_14000c390(lVar18 + 0x18,1);
          }
          if (*(int **)(lVar18 + 0x20) != (int *)0x0) {
            **(int **)(lVar18 + 0x20) = iVar24;
          }
        }
        *(longlong *)(lVar18 + 0x20) = *(longlong *)(lVar18 + 0x20) + 4;
        local_340._0_4_ = 0xffffffff;
        uVar38 = local_340._0_4_;
        local_340._0_4_ = 0xffffffff;
        lVar18 = *(longlong *)(lVar25 + 0x80);
        if ((&local_340 < *(undefined4 ***)(lVar18 + 0x38)) &&
           (ppuVar16 = *(undefined4 ***)(lVar18 + 0x30), ppuVar16 <= &local_340))
        goto LAB_1401cc82f;
        if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
          FUN_14000c390(lVar18 + 0x30,1);
        }
        if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar18 + 0x38) = 0xffffffff;
        }
      }
      else {
        local_340._0_4_ = 0x4e;
        if ((&local_340 < (undefined4 **)puVar15[1]) &&
           (ppuVar16 = (undefined4 **)*puVar15, ppuVar16 <= &local_340)) {
          if (puVar15[1] == puVar15[2]) {
            FUN_14000c390(puVar15,1);
          }
          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar15[1] =
                 *(undefined4 *)
                  (*puVar15 + ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
          }
        }
        else {
          if (puVar15[1] == puVar15[2]) {
            FUN_14000c390(puVar15,1);
          }
          if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar15[1] = 0x4e;
          }
        }
        puVar15[1] = puVar15[1] + 4;
        local_340._0_4_ = 0xffffffff;
        lVar18 = *(longlong *)(lVar25 + 0x80);
        if ((&local_340 < *(undefined4 ***)(lVar18 + 0x20)) &&
           (ppuVar16 = *(undefined4 ***)(lVar18 + 0x18), ppuVar16 <= &local_340)) {
          if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
            FUN_14000c390(lVar18 + 0x18,1);
          }
          if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar18 + 0x20) =
                 *(undefined4 *)
                  (*(longlong *)(lVar18 + 0x18) +
                  ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
          }
        }
        else {
          if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
            FUN_14000c390(lVar18 + 0x18,1);
          }
          if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar18 + 0x20) = 0xffffffff;
          }
        }
        *(longlong *)(lVar18 + 0x20) = *(longlong *)(lVar18 + 0x20) + 4;
        local_340._0_4_ = 0xf4;
        lVar18 = *(longlong *)(lVar25 + 0x80);
        if ((&local_340 < *(undefined4 ***)(lVar18 + 0x38)) &&
           (ppuVar16 = *(undefined4 ***)(lVar18 + 0x30), uVar38 = local_340._0_4_,
           ppuVar16 <= &local_340)) {
LAB_1401cc82f:
          local_340._0_4_ = uVar38;
          if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
            FUN_14000c390(lVar18 + 0x30,1);
          }
          if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar18 + 0x38) =
                 *(undefined4 *)
                  (*(longlong *)(lVar18 + 0x30) +
                  ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
          }
        }
        else {
          if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
            FUN_14000c390(lVar18 + 0x30,1);
          }
          if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar18 + 0x38) = 0xf4;
            iVar24 = -1;
          }
        }
      }
      *(longlong *)(lVar18 + 0x38) = *(longlong *)(lVar18 + 0x38) + 4;
      lVar18 = *(longlong *)(lVar25 + 0x80);
      puVar15 = (ulonglong *)(lVar18 + 0x48);
      local_340 = (undefined4 *)CONCAT44(local_340._4_4_,0xffffffff);
      if ((&local_340 < *(undefined4 ***)(lVar18 + 0x50)) &&
         (ppuVar16 = (undefined4 **)*puVar15, ppuVar16 <= &local_340)) goto LAB_1401cc671;
      if (*(longlong *)(lVar18 + 0x50) == *(longlong *)(lVar18 + 0x58)) {
        FUN_14000c390(puVar15,1);
      }
      if (*(undefined4 **)(lVar18 + 0x50) != (undefined4 *)0x0) {
        **(undefined4 **)(lVar18 + 0x50) = 0xffffffff;
      }
    }
    else {
      lVar27 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar35 * 8);
      if (((ulonglong)(*(longlong *)(lVar27 + 0x180) - *(longlong *)(lVar27 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar12) ||
         (cVar11 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar27 + 0x178) + (longlong)sVar12 * 8)
                                 + 0x6a8,0xa2), cVar11 == '\0')) goto LAB_1401cc47d;
      if (((lVar18 != 0) && (*(longlong *)(lVar18 + 0x48) != 0)) &&
         ((*(uint *)(*(longlong *)(lVar18 + 0x48) + 0x4c) & 0x10000000) != 0)) goto LAB_1401cc6df;
LAB_1401cc4ad:
      local_340._0_4_ = 0x4e;
      if ((&local_340 < (undefined4 **)puVar15[1]) &&
         (ppuVar16 = (undefined4 **)*puVar15, ppuVar16 <= &local_340)) {
        if (puVar15[1] == puVar15[2]) {
          FUN_14000c390(puVar15,1);
        }
        if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar15[1] =
               *(undefined4 *)
                (*puVar15 + ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
        }
      }
      else {
        if (puVar15[1] == puVar15[2]) {
          FUN_14000c390(puVar15,1);
        }
        if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar15[1] = 0x4e;
        }
      }
      puVar15[1] = puVar15[1] + 4;
      local_340._0_4_ = 0xffffffff;
      lVar18 = *(longlong *)(lVar25 + 0x80);
      if ((&local_340 < *(undefined4 ***)(lVar18 + 0x20)) &&
         (ppuVar16 = *(undefined4 ***)(lVar18 + 0x18), ppuVar16 <= &local_340)) {
        if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
          FUN_14000c390(lVar18 + 0x18,1);
        }
        if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar18 + 0x20) =
               *(undefined4 *)
                (*(longlong *)(lVar18 + 0x18) +
                ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
        }
      }
      else {
        if (*(longlong *)(lVar18 + 0x20) == *(longlong *)(lVar18 + 0x28)) {
          FUN_14000c390(lVar18 + 0x18,1);
        }
        if (*(undefined4 **)(lVar18 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar18 + 0x20) = 0xffffffff;
        }
      }
      *(longlong *)(lVar18 + 0x20) = *(longlong *)(lVar18 + 0x20) + 4;
      local_340._0_4_ = 0xf3;
      lVar18 = *(longlong *)(lVar25 + 0x80);
      if ((&local_340 < *(undefined4 ***)(lVar18 + 0x38)) &&
         (ppuVar16 = *(undefined4 ***)(lVar18 + 0x30), ppuVar16 <= &local_340)) {
        if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
          FUN_14000c390(lVar18 + 0x30,1);
        }
        if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar18 + 0x38) =
               *(undefined4 *)
                (*(longlong *)(lVar18 + 0x30) +
                ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
        }
      }
      else {
        if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar18 + 0x40)) {
          FUN_14000c390(lVar18 + 0x30,1);
        }
        if (*(undefined4 **)(lVar18 + 0x38) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar18 + 0x38) = 0xf3;
        }
      }
      *(longlong *)(lVar18 + 0x38) = *(longlong *)(lVar18 + 0x38) + 4;
      local_340 = (undefined4 *)CONCAT44(local_340._4_4_,0xffffffff);
      lVar18 = *(longlong *)(lVar25 + 0x80);
      puVar15 = (ulonglong *)(lVar18 + 0x48);
      if ((*(undefined4 ***)(lVar18 + 0x50) <= &local_340) ||
         (ppuVar16 = (undefined4 **)*puVar15, &local_340 < ppuVar16)) {
        if (*(longlong *)(lVar18 + 0x50) == *(longlong *)(lVar18 + 0x58)) {
          FUN_14000c390(puVar15,1);
        }
        if (*(undefined4 **)(lVar18 + 0x50) != (undefined4 *)0x0) {
          **(undefined4 **)(lVar18 + 0x50) = 0xffffffff;
        }
        *(longlong *)(lVar18 + 0x50) = *(longlong *)(lVar18 + 0x50) + 4;
        goto LAB_1401ccdf1;
      }
LAB_1401cc671:
      if (puVar15[1] == puVar15[2]) {
        FUN_14000c390(puVar15,1);
      }
      if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar15[1] =
             *(undefined4 *)(*puVar15 + ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 2) * 4);
      }
    }
    puVar15[1] = puVar15[1] + 4;
  }
LAB_1401ccdf1:
  if (((*(uint *)(local_308 + 0x50) & 8) != 0) || (param_2 == '\0')) goto LAB_1401cd6ee;
  *(uint *)(local_308 + 0x50) = *(uint *)(local_308 + 0x50) | 8;
  lVar18 = *(longlong *)(param_1 + 0x130);
  lVar27 = *(longlong *)(lVar18 + 0x18);
  sVar12 = *(short *)(lVar27 + 0xaa);
  if (*(longlong *)(lVar27 + 0x158) == 0) {
LAB_1401cce3d:
    if (0x3c < sVar12) goto LAB_1401ccf64;
LAB_1401cce47:
    iVar26 = FUN_140914d80(lVar27,4);
    if (10 < iVar26) goto LAB_1401ccf64;
    for (plVar19 = *(longlong **)(lVar27 + 0x48); plVar19 < *(longlong **)(lVar27 + 0x50);
        plVar19 = plVar19 + 1) {
      if (*(int *)(*plVar19 + 4) == 0xd) goto LAB_1401ccf64;
    }
    for (plVar19 = *(longlong **)(lVar27 + 0x48); plVar19 < *(longlong **)(lVar27 + 0x50);
        plVar19 = plVar19 + 1) {
      if (*(int *)(*plVar19 + 4) == 3) goto LAB_1401ccf64;
    }
    sVar12 = *(short *)(param_1 + 4);
    sVar35 = *(short *)(param_1 + 2);
    if (((sVar35 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar35)) ||
       (sVar12 < 0)) {
LAB_1401ccf34:
      if (((lVar18 != 0) &&
          ((lVar18 = *(longlong *)(lVar18 + 0x48), lVar18 != 0 &&
           ((*(uint *)(lVar18 + 0x4c) & 0x10000000) == 0)))) &&
         ((*(uint *)(lVar18 + 0x48) & 0x10000000) != 0)) goto LAB_1401ccf64;
    }
    else {
      lVar27 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar35 * 8);
      if (((ulonglong)(*(longlong *)(lVar27 + 0x180) - *(longlong *)(lVar27 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar12) ||
         (cVar11 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar27 + 0x178) + (longlong)sVar12 * 8)
                                 + 0x6a8,0xa2), cVar11 == '\0')) goto LAB_1401ccf34;
      if (((lVar18 == 0) || (*(longlong *)(lVar18 + 0x48) == 0)) ||
         ((*(uint *)(*(longlong *)(lVar18 + 0x48) + 0x4c) & 0x10000000) == 0)) goto LAB_1401ccf64;
    }
  }
  else {
    sVar12 = sVar12 + *(short *)(*(longlong *)(lVar27 + 0x158) + 0x2a);
    if (sVar12 < 0) goto LAB_1401cce47;
    if (sVar12 < 0x65) goto LAB_1401cce3d;
LAB_1401ccf64:
    puVar17 = operator_new(0x58);
    *(undefined8 *)(puVar17 + 4) = 0;
    *(undefined8 *)(puVar17 + 6) = 0;
    *(undefined8 *)(puVar17 + 8) = 0;
    *(undefined8 *)(puVar17 + 1) = 0xffffffffffffffff;
    puVar17[3] = 0;
    *(undefined8 *)(puVar17 + 0x11) = 0xffffffffffffffff;
    *(undefined8 *)(puVar17 + 0x13) = 0xffffffffffffffff;
    *(undefined8 *)(puVar17 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar17 + 0xe) = 0xffffffffffffffff;
    puVar17[0x10] = 0xffffffff;
    *puVar17 = *(undefined4 *)(*(longlong *)(lVar25 + 0x80) + 0x78);
    piVar1 = (int *)(*(longlong *)(lVar25 + 0x80) + 0x78);
    *piVar1 = *piVar1 + 1;
    puVar17[1] = 4;
    lVar18 = *(longlong *)(lVar25 + 0x80);
    local_340 = puVar17;
    local_318 = puVar17;
    if ((&local_340 < *(undefined4 ***)(lVar18 + 0x68)) &&
       (ppuVar16 = *(undefined4 ***)(lVar18 + 0x60), ppuVar16 <= &local_340)) {
      if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
        FUN_14000c2d0(lVar18 + 0x60,1);
      }
      if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar18 + 0x68) =
             *(undefined8 *)
              (*(longlong *)(lVar18 + 0x60) +
              ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 3) * 8);
      }
      *(longlong *)(lVar18 + 0x68) = *(longlong *)(lVar18 + 0x68) + 8;
    }
    else {
      if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
        FUN_14000c2d0(lVar18 + 0x60,1);
      }
      if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar18 + 0x68) = puVar17;
      }
      *(longlong *)(lVar18 + 0x68) = *(longlong *)(lVar18 + 0x68) + 8;
    }
  }
  uVar32 = 0;
  puVar17 = operator_new(0x58);
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  *(undefined8 *)(puVar17 + 8) = 0;
  *(undefined8 *)(puVar17 + 1) = 0xffffffffffffffff;
  puVar17[3] = 0;
  *(undefined8 *)(puVar17 + 0x11) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0x13) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0xe) = 0xffffffffffffffff;
  puVar17[0x10] = 0xffffffff;
  *puVar17 = *(undefined4 *)(*(longlong *)(lVar25 + 0x80) + 0x78);
  piVar1 = (int *)(*(longlong *)(lVar25 + 0x80) + 0x78);
  *piVar1 = *piVar1 + 1;
  puVar17[1] = 0;
  lVar18 = *(longlong *)(lVar25 + 0x80);
  local_340 = puVar17;
  local_318 = puVar17;
  if ((&local_340 < *(undefined4 ***)(lVar18 + 0x68)) &&
     (ppuVar16 = *(undefined4 ***)(lVar18 + 0x60), ppuVar16 <= &local_340)) {
    if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
      FUN_14000c2d0(lVar18 + 0x60,1);
    }
    if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar18 + 0x68) =
           *(undefined8 *)
            (*(longlong *)(lVar18 + 0x60) +
            ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 3) * 8);
    }
  }
  else {
    if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
      FUN_14000c2d0(lVar18 + 0x60,1);
    }
    if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar18 + 0x68) = puVar17;
    }
  }
  *(longlong *)(lVar18 + 0x68) = *(longlong *)(lVar18 + 0x68) + 8;
  puVar17 = operator_new(0x58);
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  *(undefined8 *)(puVar17 + 8) = 0;
  *(undefined8 *)(puVar17 + 1) = 0xffffffffffffffff;
  puVar17[3] = 0;
  *(undefined8 *)(puVar17 + 0x11) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0x13) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0xe) = 0xffffffffffffffff;
  puVar17[0x10] = 0xffffffff;
  *puVar17 = *(undefined4 *)(*(longlong *)(lVar25 + 0x80) + 0x78);
  piVar1 = (int *)(*(longlong *)(lVar25 + 0x80) + 0x78);
  *piVar1 = *piVar1 + 1;
  puVar17[1] = 1;
  lVar18 = *(longlong *)(lVar25 + 0x80);
  local_340 = puVar17;
  local_318 = puVar17;
  if ((&local_340 < *(undefined4 ***)(lVar18 + 0x68)) &&
     (ppuVar16 = *(undefined4 ***)(lVar18 + 0x60), ppuVar16 <= &local_340)) {
    if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
      FUN_14000c2d0(lVar18 + 0x60,1);
    }
    if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar18 + 0x68) =
           *(undefined8 *)
            (*(longlong *)(lVar18 + 0x60) +
            ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 3) * 8);
    }
  }
  else {
    if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
      FUN_14000c2d0(lVar18 + 0x60,1);
    }
    if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar18 + 0x68) = puVar17;
    }
  }
  *(longlong *)(lVar18 + 0x68) = *(longlong *)(lVar18 + 0x68) + 8;
  puVar17 = operator_new(0x58);
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  *(undefined8 *)(puVar17 + 8) = 0;
  *(undefined8 *)(puVar17 + 1) = 0xffffffffffffffff;
  puVar17[3] = 0;
  *(undefined8 *)(puVar17 + 0x11) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0x13) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(puVar17 + 0xe) = 0xffffffffffffffff;
  puVar17[0x10] = 0xffffffff;
  *puVar17 = *(undefined4 *)(*(longlong *)(lVar25 + 0x80) + 0x78);
  piVar1 = (int *)(*(longlong *)(lVar25 + 0x80) + 0x78);
  *piVar1 = *piVar1 + 1;
  puVar17[1] = 3;
  bVar8 = false;
  plVar19 = *(longlong **)(*(longlong *)(lVar25 + 0x80) + 0xb0);
  plVar6 = *(longlong **)(*(longlong *)(lVar25 + 0x80) + 0xb8);
  uVar34 = (ulonglong)((longlong)plVar6 + (7 - (longlong)plVar19)) >> 3;
  if (plVar6 < plVar19) {
    uVar34 = uVar32;
  }
  if (uVar34 == 0) {
LAB_1401cd31a:
    puVar17[3] = puVar17[3] | 1;
  }
  else {
    do {
      if ((*(uint *)(*plVar19 + 0x1c) < 0xc) &&
         ((0x8ccU >> (*(uint *)(*plVar19 + 0x1c) & 0x1f) & 1) != 0)) {
        bVar8 = true;
      }
      plVar19 = plVar19 + 1;
      uVar32 = uVar32 + 1;
    } while (uVar32 < uVar34);
    if (!bVar8) goto LAB_1401cd31a;
  }
  lVar18 = *(longlong *)(lVar25 + 0x80);
  local_340 = puVar17;
  local_318 = puVar17;
  if ((&local_340 < *(undefined4 ***)(lVar18 + 0x68)) &&
     (ppuVar16 = *(undefined4 ***)(lVar18 + 0x60), ppuVar16 <= &local_340)) {
    if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
      FUN_14000c2d0(lVar18 + 0x60,1);
    }
    if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar18 + 0x68) =
           *(undefined8 *)
            (*(longlong *)(lVar18 + 0x60) +
            ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 3) * 8);
    }
  }
  else {
    if (*(longlong *)(lVar18 + 0x68) == *(longlong *)(lVar18 + 0x70)) {
      FUN_14000c2d0(lVar18 + 0x60,1);
    }
    if (*(undefined8 **)(lVar18 + 0x68) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar18 + 0x68) = puVar17;
    }
  }
  *(longlong *)(lVar18 + 0x68) = *(longlong *)(lVar18 + 0x68) + 8;
  lVar27 = DAT_141c53720;
  lVar18 = DAT_141c53718;
  if (param_3 == '\0') goto LAB_1401cd6ee;
  lVar28 = *(longlong *)(param_1 + 0x140);
  lVar37 = *(longlong *)(param_1 + 0x130);
  sVar12 = *(short *)(param_1 + 4);
  sVar35 = *(short *)(param_1 + 2);
  if (((sVar35 < 0) ||
      ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar35)) ||
     (sVar12 < 0)) {
LAB_1401cd45f:
    if (((lVar37 == 0) ||
        ((lVar7 = *(longlong *)(lVar37 + 0x48), lVar7 == 0 ||
         ((*(uint *)(lVar7 + 0x4c) & 0x10000000) != 0)))) ||
       ((*(uint *)(lVar7 + 0x48) & 0x10000000) == 0)) {
LAB_1401cd483:
      if ((*(int *)(param_1 + 0x28) == -1) ||
         (((*(int *)(param_1 + 0xd0) < 1 || ((**(byte **)(param_1 + 200) & 0x80) == 0)) &&
          (((lVar37 == 0 || (lVar37 = *(longlong *)(lVar37 + 0x48), lVar37 == 0)) ||
           ((*(longlong *)(lVar37 + 0x130) == 0 &&
            (((*(byte *)(lVar37 + 0x54) & 1) != 0 || ((*(byte *)(lVar37 + 0x50) & 1) == 0))))))))))
      {
        if ((iVar24 != -1) && (lVar28 = lVar27 - lVar18 >> 3, lVar28 != 0)) {
          iVar23 = 0;
          iVar26 = (int)lVar28 + -1;
          if (-1 < iVar26) {
            do {
              iVar21 = iVar26 + iVar23 >> 1;
              lVar28 = *(longlong *)(lVar18 + (longlong)iVar21 * 8);
              if (*(int *)(lVar28 + 4) == iVar24) {
                if (lVar28 != 0) {
                  lVar28 = FUN_14053c3c0(lVar28,1);
                  goto LAB_1401cd549;
                }
                break;
              }
              if (iVar24 < *(int *)(lVar28 + 4)) {
                iVar26 = iVar21 + -1;
              }
              else {
                iVar23 = iVar21 + 1;
              }
            } while (iVar23 <= iVar26);
          }
        }
        goto LAB_1401cd6ee;
      }
    }
  }
  else {
    lVar7 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar35 * 8);
    if (((ulonglong)(*(longlong *)(lVar7 + 0x180) - *(longlong *)(lVar7 + 0x178) >> 3) <=
         (ulonglong)(longlong)sVar12) ||
       (cVar11 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar7 + 0x178) + (longlong)sVar12 * 8) +
                               0x6a8,0xa2), cVar11 == '\0')) goto LAB_1401cd45f;
    if (((lVar37 != 0) && (*(longlong *)(lVar37 + 0x48) != 0)) &&
       ((*(uint *)(*(longlong *)(lVar37 + 0x48) + 0x4c) & 0x10000000) != 0)) goto LAB_1401cd483;
  }
LAB_1401cd549:
  iVar26 = 0;
  if (lVar28 != 0) {
    for (plVar19 = *(longlong **)(lVar28 + 0x428); plVar19 < *(longlong **)(lVar28 + 0x430);
        plVar19 = plVar19 + 1) {
      lVar37 = *plVar19;
      if ((((*(byte *)(lVar37 + 0x18) & 1) != 0) && (*(int *)(lVar37 + 0xc) == 0)) &&
         (*(int *)(lVar37 + 0x10) == -1)) {
        iVar24 = *(int *)(lVar37 + 4);
        lVar27 = lVar27 - lVar18 >> 3;
        if ((lVar27 != 0) && (iVar24 != -1)) {
          iVar23 = (int)lVar27 + -1;
          if (-1 < iVar23) goto LAB_1401cd5b0;
          goto LAB_1401cd5db;
        }
        break;
      }
    }
  }
LAB_1401cd6ee:
  lVar25 = local_308;
  uVar3 = *(uint *)(local_308 + 0x50);
  if (((uVar3 & 4) == 0) && (param_2 != '\0')) {
    *(uint *)(local_308 + 0x50) = uVar3 | 4;
    iVar26 = *(int *)(param_1 + 0xb0);
    if ((iVar26 != -1) &&
       ((lVar18 = DAT_141c53720 - DAT_141c53718 >> 3, lVar18 != 0 &&
        (iVar24 = (int)lVar18 + -1, uVar31 = 0, -1 < iVar24)))) {
      do {
        iVar23 = (int)(iVar24 + uVar31) >> 1;
        lVar18 = *(longlong *)(DAT_141c53718 + (longlong)iVar23 * 8);
        if (*(int *)(lVar18 + 4) == iVar26) {
          if (lVar18 == 0) {
            return;
          }
          if ((((*(longlong *)(*(longlong *)(lVar18 + 8) + 0x3c0) == 0) &&
               (sVar12 = *(short *)(lVar18 + 0x90), -1 < sVar12)) &&
              ((ulonglong)(longlong)sVar12 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
             (cVar11 = FUN_14000d840(*(longlong *)(DAT_141d6dd50 + (longlong)sVar12 * 8) + 0x1a8,
                                     0x58), cVar11 != '\0')) {
            return;
          }
          lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
          lVar28 = *(longlong *)(lVar27 + 0x158);
          sVar35 = 0;
          sVar12 = *(short *)(lVar27 + 0xae);
          if (((lVar28 != 0) &&
              (sVar36 = *(short *)(lVar27 + 0xae) + *(short *)(lVar28 + 0x2e), sVar12 = sVar35,
              -1 < sVar36)) && (sVar12 = sVar36, 100 < sVar36)) {
            sVar12 = 100;
          }
          sVar36 = *(short *)(lVar27 + 0xb0);
          if (((lVar28 != 0) &&
              (sVar33 = *(short *)(lVar27 + 0xb0) + *(short *)(lVar28 + 0x30), sVar36 = sVar35,
              -1 < sVar33)) && (sVar36 = sVar33, 100 < sVar33)) {
            sVar36 = 100;
          }
          sVar33 = *(short *)(lVar27 + 0xde);
          if (((lVar28 != 0) &&
              (sVar29 = *(short *)(lVar27 + 0xde) + *(short *)(lVar28 + 0x5e), sVar33 = sVar35,
              -1 < sVar29)) && (sVar33 = sVar29, 100 < sVar29)) {
            sVar33 = 100;
          }
          uVar31 = (uint)*(ushort *)(lVar27 + 0xc0);
          if (lVar28 != 0) {
            uVar22 = *(ushort *)(lVar27 + 0xc0) + *(short *)(lVar28 + 0x40);
            uVar31 = 0;
            if ((-1 < (short)uVar22) && (uVar31 = (uint)uVar22, 100 < (short)uVar22)) {
              uVar31 = 100;
            }
          }
          sVar29 = *(short *)(lVar27 + 0xd4);
          if (((*(longlong *)(lVar27 + 0x158) != 0) &&
              (sVar13 = *(short *)(lVar27 + 0xd4) + *(short *)(*(longlong *)(lVar27 + 0x158) + 0x54)
              , sVar29 = sVar35, -1 < sVar13)) && (sVar29 = sVar13, 100 < sVar13)) {
            sVar29 = 100;
          }
          if (((int)(short)uVar31 - (int)sVar29) + (int)sVar33 + (int)sVar36 + (int)sVar12 < 0xb5) {
            return;
          }
          *(uint *)(lVar25 + 0x50) = uVar3 | 6;
          local_318 = operator_new(0xe8);
          puVar17 = (undefined4 *)FUN_1407d42d0(local_318,0);
          puVar17[0x23] = *(undefined4 *)(param_1 + 0xe0);
          puVar17[0x24] = 5;
          _eh_vector_constructor_iterator_(local_158,0x18,6,FUN_1400025a0,FUN_1400025c0);
          _eh_vector_constructor_iterator_(local_c8,0x18,6,FUN_1400025a0,FUN_1400025c0);
          _eh_vector_constructor_iterator_(local_278,0x18,6,FUN_1400025a0,FUN_1400025c0);
          _eh_vector_constructor_iterator_(local_1e8,0x18,6,FUN_1400025a0,FUN_1400025c0);
          local_330 = (undefined4 *)0x0;
          puStack_328 = (undefined4 *)0x0;
          local_320 = (undefined4 *)0x0;
          lVar25 = *(longlong *)(param_1 + 0x130);
          sVar12 = *(short *)(param_1 + 4);
          sVar35 = *(short *)(param_1 + 2);
          if (((sVar35 < 0) ||
              ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar35)) ||
             (sVar12 < 0)) {
LAB_1401cda40:
            if (((lVar25 == 0) ||
                ((lVar25 = *(longlong *)(lVar25 + 0x48), lVar25 == 0 ||
                 ((*(uint *)(lVar25 + 0x4c) & 0x10000000) != 0)))) ||
               ((*(uint *)(lVar25 + 0x48) & 0x10000000) == 0)) {
LAB_1401cdc57:
              if ((*(int *)(param_1 + 0x28) == -1) ||
                 (cVar11 = FUN_1400de3a0(param_1), cVar11 != '\0')) {
                local_338[0]._0_2_ = 0x74;
                FUN_14000be20(&local_330,local_338);
                local_338[0] = CONCAT22(local_338[0]._2_2_,0x5e);
                FUN_14000be20(&local_330,local_338);
                uVar14 = 0x38;
              }
              else {
                local_338[0] = CONCAT22(local_338[0]._2_2_,0x3b);
                FUN_14000be20(&local_330,local_338);
                uVar14 = 0x15;
              }
              local_338[0] = CONCAT22(local_338[0]._2_2_,uVar14);
              FUN_14000be20(&local_330,local_338);
              goto LAB_1401cdcdf;
            }
          }
          else {
            lVar27 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar35 * 8);
            if (((ulonglong)(*(longlong *)(lVar27 + 0x180) - *(longlong *)(lVar27 + 0x178) >> 3) <=
                 (ulonglong)(longlong)sVar12) ||
               (cVar11 = FUN_14000d840(*(longlong *)
                                        (*(longlong *)(lVar27 + 0x178) + (longlong)sVar12 * 8) +
                                       0x6a8,0xa2), cVar11 == '\0')) goto LAB_1401cda40;
            if (((lVar25 != 0) && (*(longlong *)(lVar25 + 0x48) != 0)) &&
               ((*(uint *)(*(longlong *)(lVar25 + 0x48) + 0x4c) & 0x10000000) != 0))
            goto LAB_1401cdc57;
          }
          FUN_14000c460(&local_330,1);
          if (puStack_328 != (undefined4 *)0x0) {
            *(undefined2 *)puStack_328 = 0x15;
          }
          puStack_328 = (undefined4 *)((longlong)puStack_328 + 2);
          local_338[0]._0_2_ = 0x30;
          if ((local_338 < puStack_328) && (local_330 <= local_338)) {
            lVar25 = (longlong)local_338 - (longlong)local_330;
            if (puStack_328 == local_320) {
              FUN_14000c460(&local_330,1);
            }
            if (puStack_328 != (undefined4 *)0x0) {
              *(undefined2 *)puStack_328 = *(undefined2 *)((longlong)local_330 + (lVar25 >> 1) * 2);
            }
          }
          else {
            if (puStack_328 == local_320) {
              FUN_14000c460(&local_330,1);
            }
            if (puStack_328 != (undefined4 *)0x0) {
              *(undefined2 *)puStack_328 = 0x30;
            }
          }
          puStack_328 = (undefined4 *)((longlong)puStack_328 + 2);
          local_338[0]._0_2_ = 0x49;
          if ((local_338 < puStack_328) && (local_330 <= local_338)) {
            lVar25 = (longlong)local_338 - (longlong)local_330;
            if (puStack_328 == local_320) {
              FUN_14000c460(&local_330,1);
            }
            if (puStack_328 != (undefined4 *)0x0) {
              *(undefined2 *)puStack_328 = *(undefined2 *)((longlong)local_330 + (lVar25 >> 1) * 2);
            }
          }
          else {
            if (puStack_328 == local_320) {
              FUN_14000c460(&local_330,1);
            }
            if (puStack_328 != (undefined4 *)0x0) {
              *(undefined2 *)puStack_328 = 0x49;
            }
          }
          puStack_328 = (undefined4 *)((longlong)puStack_328 + 2);
          local_338[0] = CONCAT22(local_338[0]._2_2_,0x4d);
          if ((local_338 < puStack_328) && (local_330 <= local_338)) {
            lVar25 = (longlong)local_338 - (longlong)local_330;
            if (puStack_328 == local_320) {
              FUN_14000c460(&local_330,1);
            }
            if (puStack_328 != (undefined4 *)0x0) {
              *(undefined2 *)puStack_328 = *(undefined2 *)((longlong)local_330 + (lVar25 >> 1) * 2);
            }
            puStack_328 = (undefined4 *)((longlong)puStack_328 + 2);
          }
          else {
            if (puStack_328 == local_320) {
              FUN_14000c460(&local_330,1);
            }
            if (puStack_328 != (undefined4 *)0x0) {
              *(undefined2 *)puStack_328 = 0x4d;
            }
            puStack_328 = (undefined4 *)((longlong)puStack_328 + 2);
          }
LAB_1401cdcdf:
          puVar10 = puStack_328;
          puVar9 = local_330;
          FUN_1400025a0(local_2e8);
          FUN_1400025a0(local_298);
          FUN_1400025a0(&local_300);
          FUN_1400025a0(local_2b8);
          uVar38 = FUN_1400025a0(local_2d0);
          iVar26 = (int)((longlong)puVar10 - (longlong)puVar9 >> 1) + -1;
          lVar25 = (longlong)iVar26;
          if (-1 < iVar26) {
            do {
              FUN_1402de540(*(undefined2 *)((longlong)puVar9 + lVar25 * 2),local_2b8,local_2d0);
              FUN_14020fc80(local_2e8,local_2b8);
              uVar38 = FUN_14020fc80(&local_300,local_2d0);
              lVar25 = lVar25 + -1;
            } while (-1 < lVar25);
          }
          iVar26 = (int)(local_2f8 - local_300 >> 2) + -1;
          if (-1 < iVar26) {
            lVar28 = (longlong)iVar26;
            lVar25 = lVar28 * 4;
            lVar27 = local_300;
            do {
              iVar24 = FUN_1400b3400(*(undefined4 *)(lVar27 + lVar25),local_2e8);
              uVar38 = extraout_XMM0_Da;
              if (iVar24 != -1) {
                uVar38 = FUN_140050340(&local_300,lVar28);
                lVar27 = local_300;
              }
              lVar28 = lVar28 + -1;
              lVar25 = lVar25 + -4;
              iVar26 = iVar26 + -1;
            } while (-1 < iVar26);
          }
          FUN_1408a4d70(uVar38,local_158,local_278,local_2e8);
          uVar38 = FUN_1401b83c0(&DAT_141d6e1a8,*(longlong *)(lVar18 + 8) + 0x3b0);
          FUN_14061e7d0(puVar17 + 2,uVar38,0x30,local_158);
          FUN_140050b50(*puVar17,*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58) + 0x38);
          plVar19 = (longlong *)FUN_140082ad0();
          *(undefined4 *)(plVar19 + 5) = *(undefined4 *)(param_1 + 0xe0);
          *(undefined4 *)((longlong)plVar19 + 0x2c) = *puVar17;
          *(undefined4 *)(plVar19 + 1) = DAT_1416b1980;
          *(undefined4 *)((longlong)plVar19 + 0xc) = DAT_1416b1974;
          (**(code **)(*plVar19 + 0x128))(plVar19);
          FUN_1400025c0(local_2d0);
          FUN_1400025c0(local_2b8);
          FUN_1400025c0(&local_300);
          FUN_1400025c0(local_298);
          FUN_1400025c0(local_2e8);
          FUN_140002620(&local_330);
          FUN_1401b8440(local_278);
          FUN_1401b8440(local_158);
          return;
        }
        if (iVar26 < *(int *)(lVar18 + 4)) {
          iVar24 = iVar23 + -1;
        }
        else {
          uVar31 = iVar23 + 1;
        }
      } while ((int)uVar31 <= iVar24);
    }
  }
  return;
  while( true ) {
    if (iVar24 < *(int *)(lVar27 + 4)) {
      iVar23 = iVar21 + -1;
    }
    else {
      iVar26 = iVar21 + 1;
    }
    if (iVar23 < iVar26) break;
LAB_1401cd5b0:
    iVar21 = iVar23 + iVar26 >> 1;
    lVar27 = *(longlong *)(lVar18 + (longlong)iVar21 * 8);
    if (*(int *)(lVar27 + 4) == iVar24) goto LAB_1401cd5df;
  }
LAB_1401cd5db:
  lVar27 = 0;
LAB_1401cd5df:
  if (lVar27 != 0) {
    puVar17 = operator_new(0x48);
    *(undefined8 *)(puVar17 + 0xc) = 0;
    *(undefined8 *)(puVar17 + 0xe) = 0;
    *(undefined8 *)(puVar17 + 0x10) = 0;
    puVar17[1] = 0;
    *(undefined8 *)(puVar17 + 2) = 0xffffffffffffffff;
    *(undefined8 *)(puVar17 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar17 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
    puVar17[10] = 0xffffffff;
    *puVar17 = *(undefined4 *)(*(longlong *)(lVar25 + 0x80) + 200);
    piVar1 = (int *)(*(longlong *)(lVar25 + 0x80) + 200);
    *piVar1 = *piVar1 + 1;
    puVar17[5] = *(undefined4 *)(lVar27 + 4);
    *(undefined8 *)(puVar17 + 7) = 0;
    lVar25 = *(longlong *)(lVar25 + 0x80);
    puVar15 = (ulonglong *)(lVar25 + 0xb0);
    local_340 = puVar17;
    local_318 = puVar17;
    if ((&local_340 < *(undefined4 ***)(lVar25 + 0xb8)) &&
       (ppuVar16 = (undefined4 **)*puVar15, ppuVar16 <= &local_340)) {
      if (*(longlong *)(lVar25 + 0xb8) == *(longlong *)(lVar25 + 0xc0)) {
        FUN_14000c2d0(puVar15,1);
      }
      if (*(undefined8 **)(lVar25 + 0xb8) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar25 + 0xb8) =
             *(undefined8 *)(*puVar15 + ((longlong)local_338 + (-8 - (longlong)ppuVar16) >> 3) * 8);
      }
      *(longlong *)(lVar25 + 0xb8) = *(longlong *)(lVar25 + 0xb8) + 8;
    }
    else {
      if (*(longlong *)(lVar25 + 0xb8) == *(longlong *)(lVar25 + 0xc0)) {
        FUN_14000c2d0(puVar15,1);
      }
      if (*(undefined8 **)(lVar25 + 0xb8) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar25 + 0xb8) = puVar17;
      }
      *(longlong *)(lVar25 + 0xb8) = *(longlong *)(lVar25 + 0xb8) + 8;
    }
  }
  goto LAB_1401cd6ee;
}

