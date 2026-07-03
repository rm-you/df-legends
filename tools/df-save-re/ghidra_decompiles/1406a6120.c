// FUN_1406a6120 @ 1406a6120
// callees:
//   -> 140c83ab0 FUN_140c83ab0
//   -> 140c26640 FUN_140c26640
//   -> 140c2a430 FUN_140c2a430
//   -> 1406a6120 FUN_1406a6120
//   -> 140802a10 FUN_140802a10
//   -> 140c62080 FUN_140c62080
//   -> 140617dc0 FUN_140617dc0
//   -> 140c745d0 FUN_140c745d0
//   -> 14080b2b0 FUN_14080b2b0
//   -> 140838f60 FUN_140838f60
//   -> 140c627a0 FUN_140c627a0
//   -> 1408054d0 FUN_1408054d0
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 140d7ffa0 FUN_140d7ffa0
//   -> 14000c380 _guard_check_icall
//   -> 1407d60f0 FUN_1407d60f0
//   -> 140ce7da0 FUN_140ce7da0
//   -> 1407f0860 FUN_1407f0860


void FUN_1406a6120(longlong *param_1,char param_2,uint param_3,short param_4,short param_5,
                  short param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong *local_res8;
  char local_res10;
  ushort local_res18;
  short local_res20;
  undefined8 uVar16;
  short local_98 [4];
  longlong *local_90;
  undefined4 *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined8 *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_res18 = (ushort)param_3;
  local_38 = 0xfffffffffffffffe;
  param_3 = param_3 & 0xffff;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20 = param_4;
  sVar4 = (**(code **)*param_1)();
  if ((sVar4 == 0x17) &&
     ((**(code **)(*param_1 + 0x1f8))(param_1,local_78,local_98,&local_70,&local_88),
     local_88 != (undefined4 *)0x0)) {
    uVar5 = (int)(*(longlong *)(local_88 + 0x100) - *(longlong *)(local_88 + 0xfe) >> 3) - 1;
    local_80 = (longlong *)(ulonglong)uVar5;
    puVar9 = local_88;
    for (; local_88 = puVar9, -1 < (int)uVar5; uVar5 = uVar5 - 1) {
      local_80 = (longlong *)
                 **(undefined8 **)((longlong)(int)uVar5 * 8 + *(longlong *)(puVar9 + 0xfe));
      lVar6 = **(longlong **)((longlong)(int)uVar5 * 8 + *(longlong *)(puVar9 + 0xfe));
      iVar14 = (int)(*(longlong *)(puVar9 + 0x100) - *(longlong *)(puVar9 + 0xfe) >> 3) + -1;
      local_68 = lVar6;
      if (-1 < iVar14) {
        local_90 = (longlong *)((longlong)iVar14 * 8);
        do {
          if (**(longlong **)((longlong)local_90 + *(longlong *)(puVar9 + 0xfe)) == lVar6) {
            sVar4 = (short)(*(longlong **)((longlong)local_90 + *(longlong *)(puVar9 + 0xfe)))[1];
            if ((sVar4 == 6) || (sVar4 == 9)) {
              FUN_140c83ab0(puVar9);
            }
            FUN_140c26640(puVar9,iVar14);
            lVar6 = local_68;
          }
          local_90 = (longlong *)((longlong)local_90 + -8);
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
      uVar16 = 1;
      FUN_140c2a430(puVar9,lVar6,0);
      if (local_res10 == '\0') {
        param_3 = (uint)(short)local_res18;
        (**(code **)(*local_80 + 0x310))(local_80,param_3,(int)local_res20,(int)param_5,uVar16);
      }
      else {
        param_3 = (uint)local_res18;
        FUN_1406a6120(local_80,local_res10,local_res18,local_res20,param_5,(char)param_6);
      }
      if ((int)(*(longlong *)(local_88 + 0x100) - *(longlong *)(local_88 + 0xfe) >> 3) < (int)uVar5)
      {
        uVar5 = (uint)(*(longlong *)(local_88 + 0x100) - *(longlong *)(local_88 + 0xfe) >> 3);
      }
      param_1 = local_res8;
      puVar9 = local_88;
    }
  }
  iVar14 = (int)(param_1[8] - param_1[7] >> 3) + -1;
  local_res8 = (longlong *)(longlong)iVar14;
  if (-1 < iVar14) {
    do {
      iVar14 = (**(code **)(**(longlong **)(param_1[7] + (longlong)local_res8 * 8) + 0x10))();
      plVar7 = local_res8;
      if (iVar14 == 0xb) {
        FUN_140802a10(param_1);
      }
      else {
        iVar14 = (**(code **)(**(longlong **)(param_1[7] + (longlong)local_res8 * 8) + 0x10))();
        lVar6 = **(longlong **)(param_1[7] + (longlong)plVar7 * 8);
        sVar4 = (short)param_3;
        if (iVar14 == 10) {
          plVar7 = (longlong *)(**(code **)(lVar6 + 0x18))();
          if (plVar7 != (longlong *)0x0) {
            FUN_140802a10(plVar7);
            if (local_res10 == '\0') {
              (**(code **)(*plVar7 + 0x310))(plVar7,(int)sVar4,(int)local_res20);
            }
            else {
              FUN_1406a6120(plVar7,local_res10,param_3 & 0xffff,local_res20,param_5,(char)param_6);
            }
          }
        }
        else {
          iVar14 = (**(code **)(lVar6 + 0x10))();
          if ((iVar14 == 9) &&
             (lVar6 = (**(code **)(**(longlong **)(param_1[7] + (longlong)plVar7 * 8) + 0x20))(),
             lVar6 != 0)) {
            FUN_140c62080();
            if (local_res10 == '\0') {
              FUN_140c745d0(lVar6,(int)sVar4,(int)local_res20,(int)param_5);
            }
            else {
              iVar14 = 0;
              lVar8 = 0;
              uVar10 = DAT_141c66ff0 - DAT_141c66fe8 >> 3;
              if (uVar10 != 0) {
                do {
                  if (*(longlong *)(DAT_141c66fe8 + lVar8 * 8) == lVar6) {
                    *(short *)(lVar6 + 0xa8) = sVar4;
                    *(short *)(lVar6 + 0xaa) = local_res20;
                    *(short *)(lVar6 + 0xac) = param_5;
                    if ((*(uint *)(lVar6 + 0x114) & 0x4000) != 0) {
                      *(short *)(lVar6 + 0x7f0) = sVar4;
                      *(undefined2 *)(lVar6 + 0x7f2) = *(undefined2 *)(lVar6 + 0xaa);
                      *(undefined2 *)(lVar6 + 0x7f4) = *(undefined2 *)(lVar6 + 0xac);
                      *(short *)(lVar6 + 0x7ea) = sVar4;
                      *(undefined2 *)(lVar6 + 0x7ec) = *(undefined2 *)(lVar6 + 0xaa);
                      *(undefined2 *)(lVar6 + 0x7ee) = *(undefined2 *)(lVar6 + 0xac);
                    }
                    FUN_140617dc0(*(undefined8 *)(DAT_141c66fe8 + lVar8 * 8),0,0x13,0);
                    break;
                  }
                  iVar14 = iVar14 + 1;
                  lVar8 = lVar8 + 1;
                } while ((ulonglong)(longlong)iVar14 < uVar10);
              }
            }
          }
        }
      }
      local_res8 = (longlong *)((longlong)local_res8 - 1);
    } while (-1 < (longlong)local_res8);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_14080b2b0(param_1,0,1);
  }
  if ((int)param_1[10] != -1) {
    FUN_140838f60(param_1);
  }
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0x7fffffff;
  if ((char)param_6 != '\0') {
    (**(code **)(*param_1 + 0x358))(param_1);
  }
  puVar13 = (undefined8 *)param_1[7];
  puVar1 = (undefined8 *)param_1[8];
  do {
    if (puVar1 <= puVar13) {
LAB_1406a69f0:
      FUN_1407f0860(param_1,1);
      (**(code **)(*param_1 + 800))(param_1);
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20010;
      return;
    }
    iVar14 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
    if (iVar14 == 1) {
      local_88 = (undefined4 *)(**(code **)(*(longlong *)*puVar13 + 0x40))();
      if (local_88 != (undefined4 *)0x0) {
        param_6 = -30000;
        if ((*(uint *)(param_1 + 2) & 0x10) != 0) goto LAB_1406a6645;
        if ((*(uint *)(param_1 + 2) & 8) != 0) {
          puVar13 = (undefined8 *)param_1[7];
          puVar1 = (undefined8 *)param_1[8];
          break;
        }
        param_6 = (short)param_1[1];
        local_res8 = (longlong *)CONCAT62(local_res8._2_6_,*(undefined2 *)((longlong)param_1 + 10));
        local_98[0] = *(short *)((longlong)param_1 + 0xc);
        goto LAB_1406a6645;
      }
      goto LAB_1406a69f0;
    }
    puVar13 = puVar13 + 1;
  } while( true );
LAB_1406a6588:
  if (puVar1 <= puVar13) goto LAB_1406a65f0;
  iVar14 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
  if (iVar14 == 0xb) {
    lVar6 = (**(code **)(*(longlong *)*puVar13 + 0x18))();
    if (lVar6 != 0) {
      FUN_1408054d0(lVar6,&param_6,&local_res8,local_98);
      goto LAB_1406a6645;
    }
  }
  else if ((iVar14 == 0x12) && (lVar6 = (**(code **)(*(longlong *)*puVar13 + 0x20))(), lVar6 != 0))
  {
    FUN_140c627a0(lVar6,&param_6,&local_res8,local_98);
    goto LAB_1406a6645;
  }
  puVar13 = puVar13 + 1;
  goto LAB_1406a6588;
LAB_1406a65f0:
  for (puVar13 = (undefined8 *)param_1[4]; puVar13 < (undefined8 *)param_1[5]; puVar13 = puVar13 + 1
      ) {
    if (*(int *)*puVar13 == 10) {
      lVar6 = *(longlong *)((int *)*puVar13 + 2);
      param_6 = *(short *)(lVar6 + 4);
      local_res8 = (longlong *)CONCAT62(local_res8._2_6_,*(undefined2 *)(lVar6 + 6));
      local_98[0] = *(short *)(lVar6 + 8);
      break;
    }
  }
LAB_1406a6645:
  plVar7 = operator_new(0x38);
  local_90 = plVar7;
  FUN_140709240(plVar7,0);
  sVar3 = param_6;
  *plVar7 = (longlong)history_event_artifact_destroyedst::vftable;
  plVar7[5] = -1;
  plVar7[6] = -1;
  *(undefined4 *)(plVar7 + 1) = DAT_1416b1980;
  *(undefined4 *)((longlong)plVar7 + 0xc) = DAT_1416b1974;
  *(undefined4 *)(plVar7 + 5) = *local_88;
  sVar4 = (short)local_res8;
  iVar15 = (int)(short)local_res8;
  iVar12 = (int)param_6;
  lVar8 = FUN_140d7ffa0(&DAT_141c53470,param_6,(ulonglong)local_res8 & 0xffff,local_98[0]);
  plVar7 = local_90;
  lVar6 = 0;
  iVar14 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3) +
           -1;
  lVar11 = (longlong)iVar14;
  if (-1 < iVar14) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + lVar11 * 8);
      if ((((((*(int *)(lVar2 + 0x2a8) < 2) ||
             ((*(byte *)(*(longlong *)(lVar2 + 0x2a0) + 1) & 4) == 0)) &&
            (iVar14 = (int)(short)(((sVar3 / 0x30 + (sVar3 >> 0xf)) -
                                   (short)((longlong)iVar12 * 0x2aaaaaab >> 0x3f)) +
                                  (short)DAT_141d69560), *(int *)(lVar2 + 0x1f8) <= iVar14)) &&
           ((iVar14 <= *(int *)(lVar2 + 0x200) &&
            (iVar14 = (int)(short)(((sVar4 / 0x30 + (sVar4 >> 0xf)) -
                                   (short)((longlong)iVar15 * 0x2aaaaaab >> 0x3f)) +
                                  (short)DAT_141d69564), *(int *)(lVar2 + 0x1fc) <= iVar14)))) &&
          ((iVar14 <= *(int *)(lVar2 + 0x204) &&
           ((*(int *)(lVar2 + 0x2a8) < 1 || ((**(byte **)(lVar2 + 0x2a0) & 4) == 0)))))) &&
         ((lVar6 == 0 ||
          ((((0 < *(int *)(lVar2 + 0x2a8) && ((**(byte **)(lVar2 + 0x2a0) & 0x80) != 0)) ||
            (*(int *)(lVar6 + 0x2a8) < 1)) || ((**(byte **)(lVar6 + 0x2a0) & 0x80) == 0)))))) {
        if (lVar8 == 0) {
          if (*(int *)(lVar2 + 0x348) < 1) {
LAB_1406a67dc:
            lVar6 = lVar2;
          }
        }
        else if ((*(int *)(lVar2 + 0x348) <= (int)*(short *)(lVar8 + 0x3a)) &&
                ((int)*(short *)(lVar8 + 0x38) <= *(int *)(lVar2 + 0x34c))) goto LAB_1406a67dc;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    if (lVar6 != 0) {
      *(undefined4 *)((longlong)local_90 + 0x2c) = *(undefined4 *)(lVar6 + 0x88);
    }
  }
  if ((DAT_1410b67dc == 1) && (0 < (int)local_90[3])) {
    *(byte *)local_90[2] = *(byte *)local_90[2] & 0xfe;
  }
  (**(code **)(*local_90 + 0x128))(local_90);
  if (DAT_1410b67dc == 0) {
    local_70 = operator_new(0x118);
    puVar9 = (undefined4 *)FUN_1407d60f0(local_70,0);
    puVar9[1] = 7;
    local_70 = operator_new(0x88);
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_70[1] = 0xffffffffffffffff;
    *(undefined4 *)(local_70 + 2) = 0xffffffff;
    local_70[8] = 0;
    local_70[9] = 0;
    local_70[10] = 0;
    local_70[6] = 0xffffffffffffffff;
    *(undefined4 *)(local_70 + 7) = 0xffffffff;
    local_70[0xd] = 0;
    local_70[0xe] = 0;
    local_70[0xf] = 0;
    *local_70 = 0xffffffffffffffff;
    local_70[0xb] = 0xffffffffffffffff;
    local_70[0xc] = 0xffffffffffffffff;
    *(undefined4 *)(local_70 + 0x10) = 0xffffffff;
    *(undefined8 **)(puVar9 + 0x44) = local_70;
    *(undefined4 *)local_70 = 5;
    *(undefined4 *)(*(longlong *)(puVar9 + 0x44) + 4) = *local_88;
    *(undefined4 *)(*(longlong *)(puVar9 + 0x44) + 0x58) = *(undefined4 *)((longlong)plVar7 + 0x2c);
    if (param_6 != -30000) {
      puVar9[0x3f] = DAT_141d69560 * 0x30 + (int)param_6;
      puVar9[0x40] = DAT_141d69564 * 0x30 + (int)(short)local_res8;
      puVar9[0x41] = local_98[0] + DAT_141d69568;
    }
    puVar9[0x39] = DAT_1416b1980;
    puVar9[0x3a] = DAT_1416b1974;
    local_3c = 2;
    local_40 = 0;
    local_60 = puVar9[1];
    local_5c = *puVar9;
    local_48 = puVar9[0x39];
    local_44 = DAT_1416b1974;
    FUN_140ce7da0(DAT_141c3d250 + 0x1240,&local_60,DAT_1416b1980);
  }
  FUN_1407f0860(param_1,1);
  (**(code **)(*param_1 + 800))(param_1);
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x10;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x10;
  if (param_6 != -30000) {
    *(short *)(param_1 + 1) = param_6;
    *(short *)((longlong)param_1 + 10) = (short)local_res8;
    *(short *)((longlong)param_1 + 0xc) = local_98[0];
  }
  (**(code **)(*param_1 + 0x318))(param_1,1);
  return;
}

