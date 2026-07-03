// FUN_140c79ee0 @ 140c79ee0
// callees:
//   -> 1407ea250 FUN_1407ea250
//   -> 140c7f4a0 FUN_140c7f4a0
//   -> 14000d840 FUN_14000d840
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140c79d30 FUN_140c79d30
//   -> 140c7f720 FUN_140c7f720
//   -> 140c76f30 FUN_140c76f30
//   -> 140c21090 FUN_140c21090
//   -> 140c21190 FUN_140c21190
//   -> 1408054d0 FUN_1408054d0
//   -> 140d43370 FUN_140d43370
//   -> 140c773a0 FUN_140c773a0


void FUN_140c79ee0(longlong param_1,ushort param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,char param_6,uint param_7)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  short sVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  ushort uVar19;
  short sVar20;
  uint uVar21;
  ulonglong uVar22;
  short sVar23;
  longlong lVar24;
  short sVar25;
  uint local_res18 [2];
  uint local_res20 [2];
  uint in_stack_ffffffffffffff88;
  undefined2 uVar26;
  uint in_stack_ffffffffffffff90;
  undefined2 uVar27;
  uint local_58;
  
  cVar5 = param_6;
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  if (DAT_141c34170 < 1) {
    return;
  }
  if ((*DAT_141c34168 & 1) == 0) {
    return;
  }
  sVar23 = *(short *)(param_1 + 0xa4);
  sVar20 = *(short *)(param_1 + 300);
  iVar18 = 0;
  sVar25 = 0;
  if (((-1 < sVar23) &&
      ((ulonglong)(longlong)sVar23 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < sVar20)) {
    lVar24 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar23 * 8);
    if ((ulonglong)(longlong)sVar20 <
        (ulonglong)(*(longlong *)(lVar24 + 0x180) - *(longlong *)(lVar24 + 0x178) >> 3)) {
      sVar25 = *(short *)(*(longlong *)(*(longlong *)(lVar24 + 0x178) + (longlong)sVar20 * 8) +
                         0x46c);
    }
  }
  iVar7 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
  while (iVar7 = iVar7 + -1, -1 < iVar7) {
    if ((cVar5 != '\0') &&
       ((ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) <=
        (ulonglong)(longlong)iVar7)) goto LAB_140c7a19a;
    puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + (longlong)iVar7 * 8);
    if (((cVar5 != '\0') &&
        ((*(longlong *)(param_1 + 0xc30) - *(longlong *)(param_1 + 0xc28) >> 3 != 0 &&
         (*(short *)((longlong)puVar16 + 10) != -1)))) &&
       (uVar6 = (**(code **)(*(longlong *)*puVar16 + 0x178))(), uVar6 != 0xea61)) {
      lVar24 = (longlong)*(short *)((longlong)puVar16 + 10) * 8;
      puVar1 = *(ushort **)(lVar24 + *(longlong *)(param_1 + 0xc28));
      uVar19 = *puVar1;
      if (sVar25 == -0x159f) {
        if (uVar6 < param_2) {
LAB_140c7a0a7:
          if ((uVar6 <= uVar19) || (param_2 <= uVar19)) {
LAB_140c7a0b7:
            FUN_1407ea250(puVar1,uVar6,
                          *(undefined2 *)
                           (*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar24) + 0xdc),10);
            uVar6 = *puVar1;
            if ((uVar6 != uVar19) && ((*(uint *)(param_1 + 0x118) >> 8 & 1) != 0)) {
              lVar24 = *(longlong *)
                        (**(longlong **)(param_1 + 0x5d8) +
                        (longlong)*(short *)((longlong)puVar16 + 10) * 8);
              uVar19 = *(ushort *)(lVar24 + 0xda);
              if (((uVar19 <= uVar6) && (uVar19 != 0xea61)) ||
                 ((uVar19 = *(ushort *)(lVar24 + 0xd8), uVar6 <= uVar19 && (uVar19 != 0xea61)))) {
                *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffeff;
              }
            }
          }
        }
        else if ((uVar19 <= uVar6) || (uVar19 <= param_2)) {
          if (uVar6 <= param_2) goto LAB_140c7a0a7;
          goto LAB_140c7a0b7;
        }
      }
      if (*puVar1 != 0xea61) {
        (**(code **)(*(longlong *)*puVar16 + 0x180))((longlong *)*puVar16,*puVar1,10);
      }
    }
    in_stack_ffffffffffffff88 = CONCAT31((int3)(in_stack_ffffffffffffff88 >> 8),cVar5);
    in_stack_ffffffffffffff90 = param_7;
    (**(code **)(*(longlong *)*puVar16 + 0x4d0))
              ((longlong *)*puVar16,param_2,1,1,in_stack_ffffffffffffff88,param_7);
    if ((ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) <=
        (ulonglong)(longlong)iVar7) {
LAB_140c7a19a:
      iVar7 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
    }
  }
  uVar12 = 0;
  uVar21 = 0;
  if (((cVar5 != '\0') &&
      (*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3 != 0)) &&
     (iVar7 = (int)(*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3) + -1,
     lVar24 = (longlong)iVar7, cVar5 = param_6, -1 < iVar7)) {
    do {
      piVar2 = *(int **)(*(longlong *)(param_1 + 0xaf8) + lVar24 * 8);
      if (piVar2[2] == -1) {
        iVar7 = piVar2[6];
        if (((iVar7 != -1) && (iVar11 = (int)(DAT_141c67370 - DAT_141c67368 >> 3), iVar11 != 0)) &&
           (iVar11 = iVar11 + -1, uVar17 = uVar12, -1 < iVar11)) {
          do {
            iVar9 = (int)uVar17 + iVar11 >> 1;
            plVar14 = *(longlong **)(DAT_141c67368 + (longlong)iVar9 * 8);
            if (*(int *)((longlong)plVar14 + 0x1c) == iVar7) {
              if (plVar14 != (longlong *)0x0) {
                sVar23 = (**(code **)(*plVar14 + 0x178))(plVar14);
                goto LAB_140c7a334;
              }
              break;
            }
            if (iVar7 < *(int *)((longlong)plVar14 + 0x1c)) {
              iVar11 = iVar9 + -1;
            }
            else {
              uVar17 = (ulonglong)(iVar9 + 1);
            }
          } while ((int)uVar17 <= iVar11);
        }
      }
      else {
        iVar11 = *piVar2;
        iVar7 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
        if (((iVar7 != 0) && (iVar11 != -1)) && (iVar7 = iVar7 + -1, uVar8 = uVar21, -1 < iVar7)) {
LAB_140c7a251:
          iVar9 = (int)(uVar8 + iVar7) >> 1;
          lVar3 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar9 * 8);
          if (*(int *)(lVar3 + 0x130) != iVar11) goto code_r0x000140c7a26a;
          if ((lVar3 == 0) ||
             (*(longlong *)(lVar3 + 0xc30) - *(longlong *)(lVar3 + 0xc28) >> 3 == 0))
          goto LAB_140c7a5b0;
          sVar23 = **(short **)(*(longlong *)(lVar3 + 0xc28) + (longlong)piVar2[2] * 8);
LAB_140c7a334:
          if (sVar23 == -0x159f) goto LAB_140c7a5b0;
          if (piVar2[1] == -1) {
            iVar7 = piVar2[5];
            if (((iVar7 != -1) && (iVar11 = (int)(DAT_141c67370 - DAT_141c67368 >> 3), iVar11 != 0))
               && (iVar11 = iVar11 + -1, uVar17 = uVar12, -1 < iVar11)) {
              while( true ) {
                iVar9 = (int)uVar17 + iVar11 >> 1;
                plVar14 = *(longlong **)(DAT_141c67368 + (longlong)iVar9 * 8);
                if (*(int *)((longlong)plVar14 + 0x1c) == iVar7) break;
                if (iVar7 < *(int *)((longlong)plVar14 + 0x1c)) {
                  iVar11 = iVar9 + -1;
                }
                else {
                  uVar17 = (ulonglong)(iVar9 + 1);
                }
                if (iVar11 < (int)uVar17) goto LAB_140c7a5b0;
              }
              if (plVar14 != (longlong *)0x0) {
                in_stack_ffffffffffffff90 = 0;
                in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
                (**(code **)(*plVar14 + 0x4d0))
                          (plVar14,sVar23,CONCAT71((int7)(uVar17 >> 8),1),0,
                           in_stack_ffffffffffffff88,10);
              }
            }
          }
          else {
            FUN_140c7f4a0(param_1);
            sVar20 = (short)piVar2[1];
            plVar14 = *(longlong **)(param_1 + 0x5d8);
            if (sVar20 < 0) {
LAB_140c7a3bb:
              sVar25 = sVar20;
            }
            else {
              if ((((ulonglong)(plVar14[1] - *plVar14 >> 3) <= (ulonglong)(longlong)sVar20) ||
                  (cVar5 = FUN_14000d840(*(longlong *)(*plVar14 + (longlong)sVar20 * 8) + 0x48,0xd),
                  cVar5 == '\0')) || (sVar20 < 0)) goto LAB_140c7a3bb;
              if (((ulonglong)(plVar14[1] - *plVar14 >> 3) <= (ulonglong)(longlong)sVar20) ||
                 (sVar25 = *(short *)(*(longlong *)(*plVar14 + (longlong)sVar20 * 8) + 0x40),
                 sVar25 == -1)) goto LAB_140c7a3bb;
            }
            lVar3 = *(longlong *)(param_1 + 0x1300);
            sVar20 = *(short *)(lVar3 + (longlong)sVar25 * 2);
            if ((ulonglong)(longlong)(sVar25 + 1) <
                (ulonglong)(*(longlong *)(param_1 + 0x1308) - lVar3 >> 1)) {
              sVar25 = *(short *)(lVar3 + (longlong)(sVar25 + 1) * 2);
            }
            else {
              sVar25 = (short)((longlong)
                               (ulonglong)
                               (uint)(*(int *)(param_1 + 0x1320) - *(int *)(param_1 + 0x1318)) >> 2)
              ;
            }
            while (sVar25 = sVar25 + -1, sVar20 <= sVar25) {
              sVar15 = *(short *)(*(longlong *)(param_1 + 0x1330) + (longlong)sVar25 * 2);
              if (100 < sVar15) {
                sVar15 = 100;
              }
              iVar11 = *(int *)(*(longlong *)(param_1 + 0x1318) + (longlong)sVar25 * 4);
              iVar7 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
              if (((iVar7 != 0) && (iVar11 != -1)) &&
                 (iVar7 = iVar7 + -1, uVar8 = uVar21, -1 < iVar7)) {
                do {
                  iVar9 = (int)(uVar8 + iVar7) >> 1;
                  plVar14 = *(longlong **)(DAT_141c67368 + (longlong)iVar9 * 8);
                  if (*(int *)((longlong)plVar14 + 0x1c) == iVar11) {
                    if (plVar14 != (longlong *)0x0) {
                      in_stack_ffffffffffffff90 = 0;
                      in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
                      (**(code **)(*plVar14 + 0x4d0))
                                (plVar14,sVar23,1,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),1),
                                 in_stack_ffffffffffffff88,10);
                    }
                    break;
                  }
                  if (iVar11 < *(int *)((longlong)plVar14 + 0x1c)) {
                    iVar7 = iVar9 + -1;
                  }
                  else {
                    uVar8 = iVar9 + 1;
                  }
                } while ((int)uVar8 <= iVar7);
              }
              if ((sVar15 == 100) ||
                 (uVar8 = FUN_1409fc0c0(),
                 (int)((uVar8 + (int)((longlong)((ulonglong)uVar8 * 0x100000003) >> 0x3f) *
                                0x7fffffff) / 0x147ae15) < (int)sVar15 / 2)) break;
            }
            if ((int)sVar25 == sVar20 + -1) {
              in_stack_ffffffffffffff88 = CONCAT31((int3)(in_stack_ffffffffffffff88 >> 8),1);
              FUN_140c79d30(param_1,sVar23,piVar2[1],10,in_stack_ffffffffffffff88);
            }
          }
        }
      }
LAB_140c7a5b0:
      lVar24 = lVar24 + -1;
      cVar5 = param_6;
    } while (-1 < lVar24);
  }
  if (*(int *)(param_1 + 0x126c) < DAT_141d86418) {
    if (cVar5 != '\0') {
      *(int *)(param_1 + 0x126c) = DAT_141d86418;
    }
  }
  else if (cVar5 != '\0') {
    return;
  }
  sVar23 = *(short *)(param_1 + 0xa4);
  sVar20 = *(short *)(param_1 + 300);
  if ((sVar23 < 0) ||
     ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar23)) {
    uVar21 = 0;
  }
  else if (-1 < sVar20) {
    lVar24 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar23 * 8);
    if ((ulonglong)(longlong)sVar20 <
        (ulonglong)(*(longlong *)(lVar24 + 0x180) - *(longlong *)(lVar24 + 0x178) >> 3)) {
      uVar21 = (uint)*(ushort *)
                      (*(longlong *)(*(longlong *)(lVar24 + 0x178) + (longlong)sVar20 * 8) + 0x466);
    }
  }
  local_res18[0] = uVar21;
  FUN_140c7f720(param_1);
  FUN_140c76f30(param_1);
  sVar23 = *(short *)(param_1 + 0xa4);
  sVar20 = *(short *)(param_1 + 300);
  local_res20[0] = 0;
  if ((sVar23 < 0) ||
     ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar23)) {
    uVar17 = 0;
LAB_140c7a702:
    local_58 = (uint)uVar17;
  }
  else {
    if (-1 < sVar20) {
      lVar24 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar23 * 8);
      if ((ulonglong)(longlong)sVar20 <
          (ulonglong)(*(longlong *)(lVar24 + 0x180) - *(longlong *)(lVar24 + 0x178) >> 3)) {
        uVar17 = (ulonglong)
                 *(ushort *)
                  (*(longlong *)(*(longlong *)(lVar24 + 0x178) + (longlong)sVar20 * 8) + 0x46c);
        goto LAB_140c7a702;
      }
    }
    local_58 = 0;
    uVar17 = uVar12;
  }
  puVar16 = *(undefined8 **)(param_1 + 0xc28);
  puVar13 = *(undefined2 **)(param_1 + 0x12d0);
  uVar10 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xc30) + (7 - (longlong)puVar16)) >> 3;
  sVar23 = 0;
  plVar14 = (longlong *)**(undefined8 **)(param_1 + 0x5d8);
  if (*(undefined8 **)(param_1 + 0xc30) < puVar16) {
    uVar10 = 0;
  }
  uVar22 = uVar12;
  cVar5 = param_6;
  if (uVar10 != 0) {
    do {
      puVar1 = (ushort *)*puVar16;
      lVar24 = *plVar14;
      uVar21 = (uint)uVar12;
      if ((short)uVar17 == -0x159f) {
        in_stack_ffffffffffffff88 = param_7;
        FUN_140c21090(puVar1,param_2,*(undefined2 *)(lVar24 + 0xdc),*puVar13,param_7);
        cVar5 = param_6;
        if (param_6 != '\0') {
          if ((short)local_res18[0] != -0x159f) {
            in_stack_ffffffffffffff88 =
                 CONCAT22((short)(in_stack_ffffffffffffff88 >> 0x10),(short)local_res18[0]);
            FUN_140c21190(puVar1);
          }
          sVar20 = *(short *)(lVar24 + 0x40);
          cVar5 = param_6;
          uVar21 = local_res20[0];
          if (sVar20 != -1) {
            uVar6 = *puVar1;
            uVar19 = **(ushort **)(*(longlong *)(param_1 + 0xc28) + (longlong)sVar20 * 8);
            if ((4 < (int)((uint)uVar19 - (uint)uVar6)) || (4 < (int)((uint)uVar6 - (uint)uVar19)))
            {
              uVar21 = in_stack_ffffffffffffff88 & 0xffffff00;
              FUN_140c79d30(param_1,uVar6,(int)sVar20,3,uVar21);
              in_stack_ffffffffffffff88 = uVar21 & 0xffffff00;
              FUN_140c79d30(param_1,(uint)uVar19,(int)sVar23,3,in_stack_ffffffffffffff88);
              cVar5 = param_6;
              uVar21 = local_res20[0];
            }
          }
          goto LAB_140c7a869;
        }
      }
      else {
LAB_140c7a869:
        if ((cVar5 != '\0') && (*puVar1 != 0xea61)) {
          iVar18 = iVar18 + (uint)*puVar1;
          local_res20[0] = uVar21 + 1;
        }
      }
      uVar26 = (undefined2)(in_stack_ffffffffffffff88 >> 0x10);
      uVar27 = (undefined2)(in_stack_ffffffffffffff90 >> 0x10);
      uVar12 = (ulonglong)local_res20[0];
      sVar23 = sVar23 + 1;
      uVar17 = (ulonglong)local_58;
      plVar14 = plVar14 + 1;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar10);
    if (0 < (int)local_res20[0]) {
      iVar18 = iVar18 / (int)local_res20[0];
      local_res20[0] = CONCAT22(local_res20[0]._2_2_,0x8ad0);
      if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
        local_res20[0] = CONCAT22(local_res20[0]._2_2_,*(undefined2 *)(param_1 + 0xa8));
        param_5 = *(undefined2 *)(param_1 + 0xaa);
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(param_1 + 0xac));
      }
      else {
        puVar4 = *(undefined8 **)(param_1 + 0x1c8);
        for (puVar16 = *(undefined8 **)(param_1 + 0x1c0); puVar16 < puVar4; puVar16 = puVar16 + 1) {
          iVar7 = (**(code **)(*(longlong *)*puVar16 + 0x10))();
          if (iVar7 == 0xb) {
            lVar24 = (**(code **)(*(longlong *)*puVar16 + 0x18))();
            uVar26 = (undefined2)(in_stack_ffffffffffffff88 >> 0x10);
            uVar27 = (undefined2)(in_stack_ffffffffffffff90 >> 0x10);
            if (lVar24 != 0) {
              FUN_1408054d0(lVar24,local_res20,&param_5,local_res18);
              break;
            }
          }
          uVar26 = (undefined2)(in_stack_ffffffffffffff88 >> 0x10);
          uVar27 = (undefined2)(in_stack_ffffffffffffff90 >> 0x10);
        }
      }
      FUN_140d43370(&DAT_141c53470,(undefined2)local_res20[0],param_5,(undefined2)local_res18[0],
                    CONCAT22(uVar26,(short)iVar18),CONCAT22(uVar27,7),8);
    }
  }
  if (((short)local_58 == -0x159f) && (param_6 != '\0')) {
    FUN_140c773a0(param_1);
  }
  return;
code_r0x000140c7a26a:
  if (iVar11 < *(int *)(lVar3 + 0x130)) {
    iVar7 = iVar9 + -1;
  }
  else {
    uVar8 = iVar9 + 1;
  }
  if (iVar7 < (int)uVar8) goto LAB_140c7a5b0;
  goto LAB_140c7a251;
}

