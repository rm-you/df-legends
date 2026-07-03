// FUN_1402b9ec0 @ 1402b9ec0
// callees:
//   -> 140d89d60 FUN_140d89d60
//   -> 140dfb5c4 operator_new
//   -> 1402824c0 FUN_1402824c0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 1402974d0 FUN_1402974d0
//   -> 14013b960 FUN_14013b960
//   -> 14000bd10 FUN_14000bd10
//   -> 140050150 FUN_140050150
//   -> 14000bed0 FUN_14000bed0
//   -> 140dfdcd8 pow
//   -> 140002020 FUN_140002020


void FUN_1402b9ec0(longlong param_1,short param_2,short param_3,ulonglong *param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  double _Y;
  double _Y_00;
  double dVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  short sVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  longlong local_d8;
  undefined8 *local_d0;
  void *local_c8;
  longlong local_c0 [10];
  undefined8 *local_70;
  
  if (-1 < param_2) {
    local_c0[9] = 0xfffffffffffffffe;
    if (((ulonglong)(longlong)param_2 <
         (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) &&
       (-1 < param_3)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
      if (((ulonglong)(longlong)param_3 <
           (ulonglong)(*(longlong *)(lVar5 + 0x180) - *(longlong *)(lVar5 + 0x178) >> 3)) &&
         (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x178) + (longlong)param_3 * 8), lVar5 != 0))
      {
        iVar11 = (int)(*(longlong *)(lVar5 + 0x4018) - *(longlong *)(lVar5 + 0x4010) >> 1) + -1;
        lVar18 = (longlong)iVar11;
        if (-1 < iVar11) {
          do {
            uVar2 = *(undefined2 *)(*(longlong *)(lVar5 + 0x4010) + lVar18 * 2);
            uVar3 = *(undefined4 *)(*(longlong *)(lVar5 + 0x4028) + lVar18 * 4);
            lVar12 = FUN_140d89d60(&DAT_141c53470,uVar2,uVar3);
            if (((lVar12 != 0) && (0 < *(int *)(lVar12 + 0x298))) &&
               ((**(byte **)(lVar12 + 0x290) & 2) != 0)) {
              local_c8 = operator_new(0xc0);
              lVar12 = FUN_1402824c0(local_c8,0);
              *(undefined4 *)(lVar12 + 0x78) = 1;
              *(undefined2 *)(lVar12 + 0xb0) = uVar2;
              *(undefined4 *)(lVar12 + 0xb4) = uVar3;
              plVar6 = (longlong *)param_4[1];
              local_d8 = lVar12;
              if ((&local_d8 < plVar6) && (plVar7 = (longlong *)*param_4, plVar7 <= &local_d8)) {
                if (plVar6 == (longlong *)param_4[2]) {
                  FUN_14000c2d0(param_4,1);
                }
                if ((undefined8 *)param_4[1] != (undefined8 *)0x0) {
                  *(undefined8 *)param_4[1] =
                       *(undefined8 *)(*param_4 + ((longlong)&local_d8 - (longlong)plVar7 >> 3) * 8)
                  ;
                }
              }
              else {
                if (plVar6 == (longlong *)param_4[2]) {
                  FUN_14000c2d0(param_4,1);
                }
                if ((longlong *)param_4[1] != (longlong *)0x0) {
                  *(longlong *)param_4[1] = lVar12;
                }
              }
              param_4[1] = param_4[1] + 8;
            }
            lVar18 = lVar18 + -1;
          } while (-1 < lVar18);
        }
        iVar11 = *(int *)(lVar5 + 0x4b8);
        if (1 < iVar11) {
          iVar11 = iVar11 + -1;
        }
        local_c0[6] = 0;
        local_c0[7] = 0;
        local_c0[8] = 0;
        local_c0[3] = 0;
        local_c0[4] = 0;
        local_c0[5] = 0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        local_c0[2] = 0;
        FUN_1402974d0(param_1,param_2,param_3,local_c0 + 6,local_c0 + 3,local_c0,0,iVar11,0);
        dVar10 = DAT_140f92b78;
        _Y_00 = DAT_140f92af0;
        _Y = DAT_140f92ac8;
        lVar18 = *(longlong *)(lVar5 + 0x6c8) - *(longlong *)(lVar5 + 0x6c0);
        sVar14 = (short)(lVar18 >> 3) + -1;
        local_d8 = CONCAT62((int6)(lVar18 >> 0x13),sVar14);
        if (-1 < sVar14) {
          local_c8 = (void *)((longlong)sVar14 << 3);
          do {
            local_d0 = *(undefined8 **)((longlong)local_c8 + *(longlong *)(lVar5 + 0x6c0));
            if ((4 < *(int *)(local_d0 + 10)) && ((*(byte *)(local_d0[9] + 4) & 1) != 0)) {
              puVar13 = operator_new(0x380);
              local_70 = puVar13;
              FUN_14013b960(puVar13,0);
              *puVar13 = item_corpsepiecest::vftable;
              *(short *)(puVar13 + 0x16) = param_2;
              *(short *)((longlong)puVar13 + 0xbc) = param_3;
              *(short *)(puVar13 + 0x18) = param_2;
              *(short *)((longlong)puVar13 + 0xc2) = param_3;
              *(undefined1 *)((longlong)puVar13 + 0xbe) = *(undefined1 *)(lVar5 + 0x1580);
              plVar6 = puVar13 + 0x23;
              FUN_14000bd10(plVar6,*(longlong *)(lVar5 + 0x6c8) - *(longlong *)(lVar5 + 0x6c0) >> 3)
              ;
              puVar15 = (undefined4 *)*plVar6;
              uVar17 = 0;
              uVar19 = (puVar13[0x24] - (longlong)puVar15) + 3U >> 2;
              if ((undefined4 *)puVar13[0x24] < puVar15) {
                uVar19 = uVar17;
              }
              if (uVar19 != 0) {
                do {
                  *puVar15 = 0;
                  puVar15 = puVar15 + 1;
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar19);
              }
              FUN_14000bd10(puVar13 + 0x26,
                            *(longlong *)(lVar5 + 0x760) - *(longlong *)(lVar5 + 0x758) >> 2);
              iVar11 = (int)((longlong)(puVar13[0x27] - puVar13[0x26]) >> 2) + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  *(undefined4 *)(puVar13[0x26] + lVar18 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar5 + 0x758) + lVar18 * 4);
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              plVar7 = puVar13 + 0x2c;
              FUN_14000bd10(plVar7,*(longlong *)(lVar5 + 0x730) - *(longlong *)(lVar5 + 0x728) >> 1)
              ;
              FUN_14000bd10(puVar13 + 0x2f,
                            *(longlong *)(lVar5 + 0x730) - *(longlong *)(lVar5 + 0x728) >> 1);
              FUN_14000bd10(puVar13 + 0x32,
                            *(longlong *)(lVar5 + 0x730) - *(longlong *)(lVar5 + 0x728) >> 1);
              FUN_14000bd10(puVar13 + 0x35,
                            *(longlong *)(lVar5 + 0x730) - *(longlong *)(lVar5 + 0x728) >> 1);
              FUN_14000bd10(puVar13 + 0x38);
              iVar11 = (int)(puVar13[0x2d] - *plVar7 >> 2) + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  *(undefined4 *)(*plVar7 + lVar18 * 4) = 0;
                  *(undefined4 *)(puVar13[0x2f] + lVar18 * 4) = 0;
                  *(undefined4 *)(puVar13[0x32] + lVar18 * 4) = 0;
                  *(undefined4 *)(puVar13[0x35] + lVar18 * 4) = 0;
                  *(undefined4 *)(puVar13[0x38] + lVar18 * 4) = 0;
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              FUN_14000bd10(puVar13 + 0x29,
                            *(longlong *)(lVar5 + 0x790) - *(longlong *)(lVar5 + 0x788) >> 2);
              iVar11 = (int)((longlong)(puVar13[0x2a] - puVar13[0x29]) >> 2) + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  *(undefined4 *)(puVar13[0x29] + lVar18 * 4) = 100;
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              FUN_14000bd10(puVar13 + 0x44,puVar13[0x24] - *plVar6 >> 2);
              iVar11 = (int)((longlong)(puVar13[0x45] - puVar13[0x44]) >> 2) + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  *(undefined4 *)(puVar13[0x44] + lVar18 * 4) =
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar5 + 0x6c0) + lVar18 * 8) + 0x80);
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              FUN_140050150(puVar13 + 0x47,local_c0 + 6);
              FUN_140050150(puVar13 + 0x4a,local_c0 + 3);
              FUN_140050150(puVar13 + 0x52,local_c0);
              *(undefined4 *)(puVar13 + 0x4d) = 100;
              iVar11 = (int)(*(longlong *)(lVar5 + 0x1650) - *(longlong *)(lVar5 + 0x1648) >> 1);
              lVar18 = (longlong)iVar11;
              FUN_14000bed0(puVar13 + 0x55,lVar18);
              FUN_14000bd10(puVar13 + 0x58,lVar18);
              FUN_14000bd10(puVar13 + 0x5b,lVar18);
              FUN_14000bd10(puVar13 + 0x5e);
              iVar11 = iVar11 + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  *(undefined2 *)(puVar13[0x55] + lVar18 * 2) = 0xffff;
                  *(undefined4 *)(puVar13[0x58] + lVar18 * 4) = 0xffffffff;
                  *(undefined4 *)(puVar13[0x5b] + lVar18 * 4) = 0xffffffff;
                  *(undefined4 *)(puVar13[0x5e] + lVar18 * 4) = 0xffffffff;
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              puVar16 = puVar13 + 0x3e;
              puVar15 = (undefined4 *)(lVar5 + 0x11fc);
              lVar18 = 6;
              do {
                *(undefined4 *)(puVar16 + -3) = *puVar15;
                *(undefined4 *)puVar16 = 0;
                puVar16 = (undefined8 *)((longlong)puVar16 + 4);
                puVar15 = puVar15 + 7;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
              iVar11 = *(int *)(*(longlong *)(lVar5 + 0x15a0) + -4 +
                               (*(longlong *)(lVar5 + 0x15a8) - *(longlong *)(lVar5 + 0x15a0) >> 2)
                               * 4);
              *(int *)(puVar13 + 0x41) = iVar11;
              iVar4 = *(int *)(*(longlong *)(lVar5 + 0x15a0) + -4 +
                              (*(longlong *)(lVar5 + 0x15a8) - *(longlong *)(lVar5 + 0x15a0) >> 2) *
                              4);
              *(int *)((longlong)puVar13 + 0x20c) = iVar4;
              dVar20 = pow((double)iVar11 * dVar10,_Y);
              *(int *)(puVar13 + 0x43) = (int)(dVar20 * dVar10);
              dVar20 = pow((double)iVar4 * dVar10,_Y);
              *(int *)((longlong)puVar13 + 0x21c) = (int)(dVar20 * dVar10);
              dVar20 = pow((double)iVar11,_Y_00);
              *(int *)(puVar13 + 0x42) = (int)dVar20;
              dVar20 = pow((double)iVar4,_Y_00);
              *(int *)((longlong)puVar13 + 0x214) = (int)dVar20;
              *(undefined1 *)(puVar13 + 0x19) = 0;
              *(undefined4 *)((longlong)puVar13 + 0x30c) = 50000;
              *(undefined4 *)(puVar13 + 0x61) = 0;
              sVar14 = (short)((longlong)(puVar13[0x24] - puVar13[0x23]) >> 2) + -1;
              if (-1 < sVar14) {
                lVar18 = (longlong)sVar14 << 2;
                do {
                  if (sVar14 != (short)local_d8) {
                    *(uint *)(lVar18 + puVar13[0x23]) = *(uint *)(lVar18 + puVar13[0x23]) | 2;
                  }
                  lVar18 = lVar18 + -4;
                  sVar14 = sVar14 + -1;
                } while (-1 < sVar14);
              }
              iVar11 = (int)(puVar13[0x2d] - *plVar7 >> 2) + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  puVar1 = (uint *)(*plVar7 + lVar18 * 4);
                  *puVar1 = *puVar1 | 1;
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              iVar11 = (int)((longlong)(local_d0[0xc] - local_d0[0xb]) >> 3) + -1;
              lVar18 = (longlong)iVar11;
              if (-1 < iVar11) {
                do {
                  puVar1 = (uint *)(*plVar7 +
                                   (longlong)
                                   *(int *)(*(longlong *)(local_d0[0xb] + lVar18 * 8) + 0x68) * 4);
                  *puVar1 = *puVar1 & 0xfffffffe;
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
              ppuVar8 = (undefined8 **)param_4[1];
              local_d0 = puVar13;
              if ((&local_d0 < ppuVar8) && (ppuVar9 = (undefined8 **)*param_4, ppuVar9 <= &local_d0)
                 ) {
                if (ppuVar8 == (undefined8 **)param_4[2]) {
                  FUN_14000c2d0(param_4,1);
                }
                if ((undefined8 *)param_4[1] != (undefined8 *)0x0) {
                  *(undefined8 *)param_4[1] =
                       *(undefined8 *)
                        (*param_4 + ((longlong)&local_d0 - (longlong)ppuVar9 >> 3) * 8);
                }
              }
              else {
                if (ppuVar8 == (undefined8 **)param_4[2]) {
                  FUN_14000c2d0(param_4,1);
                }
                if ((undefined8 *)param_4[1] != (undefined8 *)0x0) {
                  *(undefined8 *)param_4[1] = puVar13;
                }
              }
              param_4[1] = param_4[1] + 8;
            }
            sVar14 = (short)local_d8 + -1;
            local_d8 = CONCAT62((int6)((ulonglong)local_d8 >> 0x10),sVar14);
            local_c8 = (void *)((longlong)local_c8 + -8);
          } while (-1 < sVar14);
        }
        if (local_c0[0] != 0) {
          FUN_140002020(local_c0[0],local_c0[2] - local_c0[0] >> 2,4);
        }
        if (local_c0[3] != 0) {
          FUN_140002020(local_c0[3],local_c0[5] - local_c0[3] >> 2,4);
        }
        if (local_c0[6] != 0) {
          FUN_140002020(local_c0[6],local_c0[8] - local_c0[6] >> 2,4);
        }
      }
    }
  }
  return;
}

