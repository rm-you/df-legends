// FUN_140c5f840 @ 140c5f840
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140d8abf0 FUN_140d8abf0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5c4 operator_new
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050d30 FUN_140050d30
//   -> 140cbb440 FUN_140cbb440


void FUN_140c5f840(longlong param_1,short param_2,int param_3,short param_4,short param_5,
                  int param_6,short param_7,ushort param_8)

{
  void *_Src;
  ulonglong *puVar1;
  void *_Dst;
  uint *puVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  short **ppsVar8;
  short **ppsVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  short local_54 [2];
  undefined2 local_50 [2];
  undefined2 local_4c [2];
  short *local_48;
  short *local_40;
  
  if (param_2 == -1) {
    return;
  }
  if (param_6 < 1) {
    return;
  }
  lVar18 = 0;
  local_48 = (short *)0x0;
  local_54[0] = -30000;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    local_54[0] = *(short *)(param_1 + 0xa8);
    local_4c[0] = *(undefined2 *)(param_1 + 0xaa);
    local_50[0] = *(undefined2 *)(param_1 + 0xac);
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x1c8);
    for (puVar16 = *(undefined8 **)(param_1 + 0x1c0); puVar16 < puVar7; puVar16 = puVar16 + 1) {
      iVar13 = (**(code **)(*(longlong *)*puVar16 + 0x10))();
      if ((iVar13 == 0xb) && (lVar14 = (**(code **)(*(longlong *)*puVar16 + 0x18))(), lVar14 != 0))
      {
        FUN_1408054d0(lVar14,local_54,local_4c,local_50);
        break;
      }
    }
  }
  puVar1 = (ulonglong *)(param_1 + 0x6b0);
  iVar13 = (int)((longlong)(*(longlong *)(param_1 + 0x6b8) - *puVar1) >> 3) + -1;
  bVar12 = false;
  if (-1 < iVar13) {
    lVar14 = (longlong)iVar13 * 8;
    do {
      psVar15 = *(short **)(lVar14 + *puVar1);
      if ((psVar15[0xc] == param_7) && (psVar15[0xd] == param_8)) {
        sVar3 = *psVar15;
        if ((sVar3 == param_2) && (*(int *)(psVar15 + 2) == param_3)) break;
        if (((param_2 == 6) && (sVar3 != 6)) && ((param_8 & 1) != 0)) {
          if (((*(byte *)(psVar15 + 10) & 1) == 0) && (local_54[0] != -30000)) {
            iVar11 = param_6;
            if (*(int *)(psVar15 + 8) < param_6) {
              iVar11 = *(int *)(psVar15 + 8);
            }
            FUN_140d8abf0(&DAT_141c53470,local_54[0],local_4c[0],local_50[0],sVar3,
                          *(undefined4 *)(psVar15 + 2),psVar15[4],iVar11,1);
          }
          *(int *)(psVar15 + 8) = *(int *)(psVar15 + 8) - param_6;
          if (*(int *)(psVar15 + 8) < 1) {
LAB_140c5fa50:
            free(psVar15);
            _Dst = (void *)(*puVar1 + (longlong)iVar13 * 8);
            _Src = (void *)((longlong)_Dst + 8);
            memmove(_Dst,_Src,*(longlong *)(param_1 + 0x6b8) - (longlong)_Src);
            *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + -8;
          }
          else {
LAB_140c5fab4:
            bVar12 = true;
          }
        }
        else if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
          if (*(int *)(psVar15 + 8) <= param_6) goto LAB_140c5fa50;
          goto LAB_140c5fab4;
        }
      }
      lVar14 = lVar14 + -8;
      iVar13 = iVar13 + -1;
      psVar15 = local_48;
    } while (-1 < iVar13);
    local_48 = psVar15;
    if (bVar12) {
      return;
    }
    psVar15 = local_48;
    if (local_48 != (short *)0x0) goto LAB_140c5fc06;
  }
  psVar15 = operator_new(0x1c);
  psVar15[5] = 0x2742;
  psVar15[6] = 0;
  psVar15[8] = 0;
  psVar15[9] = 0;
  psVar15[10] = 0;
  psVar15[0xc] = -1;
  psVar15[0xd] = 0;
  *psVar15 = param_2;
  *(int *)(psVar15 + 2) = param_3;
  local_48 = psVar15;
  local_40 = psVar15;
  lVar14 = FUN_140d89d60(&DAT_141c53470,param_2,param_3);
  if (((lVar14 != 0) && (9 < *(int *)(lVar14 + 0x298))) &&
     ((*(byte *)(*(longlong *)(lVar14 + 0x290) + 9) & 1) != 0)) {
    psVar15[10] = psVar15[10] | 1;
  }
  psVar15[8] = 0;
  psVar15[9] = 0;
  psVar15[0xc] = param_7;
  psVar15[0xd] = param_8;
  ppsVar8 = *(short ***)(param_1 + 0x6b8);
  if ((&local_40 < ppsVar8) && (ppsVar9 = (short **)*puVar1, ppsVar9 <= &local_40)) {
    if (ppsVar8 == *(short ***)(param_1 + 0x6c0)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x6b8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x6b8) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_40 - (longlong)ppsVar9 >> 3) * 8);
    }
    *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + 8;
    psVar15 = local_48;
  }
  else {
    if (ppsVar8 == *(short ***)(param_1 + 0x6c0)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x6b8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x6b8) = psVar15;
    }
    *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + 8;
  }
LAB_140c5fc06:
  psVar15[4] = param_4;
  psVar15[5] = param_5;
  if ((param_2 == 6) && ((param_8 & 1) != 0)) {
    lVar14 = (longlong)param_7 * 4;
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x4d0) + lVar14);
    if (3 < ((byte)(uVar5 >> 0xf) & 7)) {
      *(uint *)(*(longlong *)(param_1 + 0x4d0) + lVar14) = uVar5 & 0xfffc7fff;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar14);
      *puVar2 = *puVar2 | 0x18000;
    }
  }
  if (*(int *)(psVar15 + 8) < param_6) {
    lVar14 = FUN_140d89d60(&DAT_141c53470,param_2,param_3);
    sVar3 = *(short *)(param_1 + 300);
    sVar4 = *(short *)(param_1 + 0xa4);
    if (((-1 < sVar4) &&
        ((ulonglong)(longlong)sVar4 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar3)) {
      lVar17 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar4 * 8);
      lVar18 = 0;
      if ((ulonglong)(longlong)sVar3 <
          (ulonglong)(*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) {
        lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x178) + (longlong)sVar3 * 8);
      }
    }
    if (((lVar14 != 0) && (lVar18 != 0)) &&
       (iVar13 = (int)(*(longlong *)(lVar14 + 0x4d8) - *(longlong *)(lVar14 + 0x4d0) >> 3) + -1,
       lVar17 = (longlong)iVar13, -1 < iVar13)) {
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar14 + 0x4d0) + lVar17 * 8);
        uVar6 = *(undefined4 *)(lVar10 + 0x10c);
        if (param_7 == -1) {
          iVar13 = FUN_140050d30(uVar6,lVar18 + 0x3f08);
        }
        else {
          iVar13 = FUN_140050d30(uVar6,lVar18 + 0x3f20);
        }
        if (iVar13 != -1) {
          FUN_140cbb440(param_1,lVar10);
        }
        lVar17 = lVar17 + -1;
        psVar15 = local_48;
      } while (-1 < lVar17);
    }
    *(int *)(psVar15 + 8) = param_6;
  }
  return;
}

