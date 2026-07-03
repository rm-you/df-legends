// FUN_140da7820 @ 140da7820
// callees:
//   -> 140004830 FUN_140004830
//   -> 1400c05e0 FUN_1400c05e0
//   -> 1405b4fb0 FUN_1405b4fb0
//   -> 14014e120 FUN_14014e120
//   -> 140da7d20 FUN_140da7d20
//   -> 140d74b10 FUN_140d74b10
//   -> 1400c0380 FUN_1400c0380
//   -> 1400c0400 FUN_1400c0400
//   -> 140d7ffa0 FUN_140d7ffa0
//   -> 1400c0480 FUN_1400c0480
//   -> 140da7c70 FUN_140da7c70
//   -> 1401508a0 FUN_1401508a0
//   -> 14000d840 FUN_14000d840
//   -> 140002460 FUN_140002460
//   -> 140d74d60 FUN_140d74d60
//   -> 140d74c30 FUN_140d74c30
//   -> 140d89d60 FUN_140d89d60


void FUN_140da7820(longlong param_1,short param_2,short param_3,undefined2 param_4,short *param_5,
                  undefined2 *param_6,undefined2 *param_7,int *param_8,undefined2 *param_9)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined2 uVar8;
  short sVar9;
  
  uVar2 = FUN_140004830();
  uVar7 = (uint)uVar2;
  uVar8 = 0;
  if (uVar2 < 0x105) {
    if (uVar2 < 0x103) {
      if (((uVar2 - 0x27 < 3) || (uVar7 == 0xed)) || (uVar7 == 0x101)) goto LAB_140da7882;
    }
    else {
      uVar8 = 1;
    }
  }
  else if ((uVar2 < 0x108) || (uVar7 - 0x15c < 8)) {
LAB_140da7882:
    uVar8 = 3;
  }
  *param_9 = uVar8;
  cVar1 = FUN_1400c05e0(uVar2);
  if ((cVar1 != '\0') &&
     (lVar5 = FUN_1405b4fb0(param_1,param_2,param_3,param_4,0,
                            (int)(*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x120) >>
                                 3) + -1), lVar5 != 0)) {
    *param_5 = *(short *)(lVar5 + 6);
    *param_6 = *(undefined2 *)(lVar5 + 8);
    *param_7 = *(undefined2 *)(lVar5 + 10);
    *param_8 = *(int *)(lVar5 + 0xc);
    return;
  }
  sVar9 = -1;
  *param_5 = 4;
  *param_6 = 0xffff;
  *param_7 = 0;
  cVar1 = FUN_14014e120(uVar2);
  if (cVar1 != '\0') {
    lVar5 = FUN_140da7d20(param_1,param_2,param_3,param_4);
    if (lVar5 != 0) {
      uVar7 = (int)param_2 & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      uVar3 = (int)param_3 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      cVar1 = *(char *)((longlong)(int)uVar3 + 0x208 + lVar5 + (longlong)(int)uVar7 * 0x10);
      if (cVar1 != '\0') {
        if (cVar1 != '\x01') goto LAB_140da7b52;
        goto LAB_140da7a01;
      }
    }
    *param_7 = 6;
    *param_8 = -1;
    goto LAB_140da7b52;
  }
  cVar1 = FUN_1400c0380(uVar2);
  if (cVar1 == '\0') {
    cVar1 = FUN_1400c0400(uVar2);
    if (cVar1 != '\0') {
      *param_7 = 0xffff;
      *param_8 = -1;
      plVar6 = (longlong *)FUN_140d7ffa0(param_1,param_2,param_3,param_4);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x40))(plVar6,param_7,param_8);
      }
      goto LAB_140da7b52;
    }
    cVar1 = FUN_1400c0480(uVar2);
    if (cVar1 == '\0') {
      iVar4 = FUN_1401508a0(param_1,param_2,param_3,param_4);
      *param_8 = iVar4;
      if (-1 < iVar4) {
        if (((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3)
            ) && (cVar1 = FUN_14000d840(*(longlong *)
                                         (*(longlong *)(param_1 + 0x11a770) + (longlong)iVar4 * 8) +
                                        0x38,0xb), cVar1 != '\0')) {
          cVar1 = FUN_140002460(uVar2);
          if (cVar1 == '\0') goto LAB_140da7b52;
          iVar4 = FUN_140d74d60(param_1,param_2,param_3,param_4);
          goto LAB_140da7b50;
        }
      }
      cVar1 = FUN_140002460(uVar2);
      if (cVar1 != '\0') goto LAB_140da7b52;
      iVar4 = FUN_140d74c30(param_1,param_2,param_3,param_4);
    }
    else {
      lVar5 = FUN_140da7c70();
      if (lVar5 == 0) {
        iVar4 = FUN_1401508a0(param_1,param_2,param_3,param_4);
      }
      else {
        iVar4 = *(int *)(lVar5 + 8);
      }
    }
  }
  else {
LAB_140da7a01:
    lVar5 = FUN_140d74b10(param_1,param_2,param_3,param_4);
    if (lVar5 != 0) {
      sVar9 = *(short *)(lVar5 + 0x3ad8);
    }
    iVar4 = (int)sVar9;
  }
LAB_140da7b50:
  *param_8 = iVar4;
LAB_140da7b52:
  if ((((*param_5 == 4) && (lVar5 = FUN_140d89d60(&DAT_141c53470,*param_7,*param_8), lVar5 != 0)) &&
      (6 < *(int *)(lVar5 + 0x298))) && ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 6) & 1) != 0)) {
    *param_5 = 3;
  }
  return;
}

