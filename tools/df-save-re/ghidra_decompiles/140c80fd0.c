// FUN_140c80fd0 @ 140c80fd0
// callees:
//   -> 14000bed0 FUN_14000bed0
//   -> 14000d840 FUN_14000d840
//   -> 140c800d0 FUN_140c800d0
//   -> 14000c460 FUN_14000c460
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020


uint FUN_140c80fd0(longlong param_1,char param_2,undefined8 *param_3)

{
  longlong lVar1;
  short sVar2;
  bool bVar3;
  undefined2 *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  short *psVar11;
  longlong lVar12;
  short *psVar13;
  short *psVar14;
  short sVar15;
  ulonglong uVar16;
  short local_res20 [4];
  short local_98;
  uint local_94;
  short *local_90;
  short *local_80;
  short *psStack_78;
  short *local_70;
  undefined2 *local_68;
  undefined2 *puStack_60;
  longlong local_58;
  
  local_80 = (short *)0x0;
  psStack_78 = (short *)0x0;
  psVar14 = (short *)0x0;
  local_90 = (short *)0x0;
  local_70 = (short *)0x0;
  local_68 = (undefined2 *)0x0;
  puStack_60 = (undefined2 *)0x0;
  local_58 = 0;
  FUN_14000bed0(&local_68,*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2);
  puVar4 = local_68;
  psVar13 = (short *)((ulonglong)((longlong)puStack_60 + (1 - (longlong)local_68)) >> 1);
  if (puStack_60 < local_68) {
    psVar13 = psVar14;
  }
  puVar9 = local_68;
  psVar11 = psVar14;
  if (psVar13 != (short *)0x0) {
    do {
      *puVar9 = 0;
      psVar11 = (short *)((longlong)psVar11 + 1);
      puVar9 = puVar9 + 1;
    } while (psVar11 < psVar13);
  }
  iVar7 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
  lVar12 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar12 * 8);
      if ((*(short *)(lVar1 + 8) == 1) && (sVar15 = *(short *)(lVar1 + 10), sVar15 != -1)) {
        local_68[sVar15] = local_68[sVar15] + 1;
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  local_94 = 0xffffffff;
  local_98 = -1;
  bVar3 = false;
  sVar15 = (short)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2);
  psVar13 = local_80;
  psVar11 = psStack_78;
joined_r0x000140c810ea:
  do {
    do {
      sVar15 = sVar15 + -1;
      local_res20[0] = sVar15;
      if (sVar15 < 0) {
        uVar8 = 0xffffffff;
        uVar16 = (longlong)psVar11 - (longlong)psVar13 >> 1;
        if (uVar16 != 0) {
          if ((uint)uVar16 < 2) {
            uVar10 = 0;
          }
          else {
            uVar8 = FUN_1409fc0c0();
            uVar10 = (uVar8 + (int)((longlong)((ulonglong)uVar8 * 0x100000003) >> 0x3f) * 0x7fffffff
                     ) / ((int)(0x7fffffff / (uVar16 & 0xffffffff)) + 1U);
          }
          uVar8 = (uint)(ushort)psVar13[(int)uVar10];
          local_94 = (uint)(ushort)psVar13[(int)uVar10];
        }
        if (puVar4 != (undefined2 *)0x0) {
          FUN_140002020(puVar4,local_58 - (longlong)puVar4 >> 1,2);
          uVar8 = local_94;
        }
        if (psVar13 != (short *)0x0) {
          FUN_140002020(psVar13,(longlong)psVar14 - (longlong)psVar13 >> 1,2);
          uVar8 = local_94 & 0xffff;
        }
        return uVar8;
      }
    } while (sVar15 < 0);
    lVar12 = **(longlong **)(param_1 + 0x5d8);
    uVar16 = (ulonglong)sVar15;
    psVar14 = local_90;
  } while (((((ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar12 >> 3) <= uVar16) ||
            (cVar5 = FUN_14000d840(*(longlong *)(lVar12 + uVar16 * 8) + 0x48,9), cVar5 == '\0')) ||
           (FUN_140c800d0(param_1),
           *(char *)((longlong)sVar15 + *(longlong *)(param_1 + 0x12b8)) == '\0')) ||
          ((puVar4[uVar16] != 0 && (param_2 == '\0'))));
  sVar6 = puVar4[uVar16];
  sVar2 = sVar6 - local_98;
  if (local_98 < sVar6) goto code_r0x000140c81177;
  goto LAB_140c81186;
code_r0x000140c81177:
  if (local_98 != -1) goto joined_r0x000140c810ea;
  sVar6 = puVar4[uVar16];
  sVar2 = sVar6 + 1;
LAB_140c81186:
  if ((SBORROW2(sVar6,local_98) != sVar2 < 0) || (local_98 == -1)) {
    local_98 = puVar4[uVar16];
    bVar3 = false;
    psVar11 = psVar13;
    psStack_78 = psVar13;
  }
  if (puVar4[uVar16] != local_98) goto joined_r0x000140c810ea;
  if (param_3 == (undefined8 *)0x0) goto LAB_140c811ed;
  sVar6 = (**(code **)*param_3)();
  if (sVar6 == 0x18) {
    if (sVar15 != *(short *)(param_1 + 0x5e0)) {
LAB_140c811e4:
      if (bVar3) goto joined_r0x000140c810ea;
      goto LAB_140c811ed;
    }
  }
  else if (sVar15 == *(short *)(param_1 + 0x5e0)) goto LAB_140c811e4;
  if (!bVar3) {
    psVar11 = psVar13;
  }
  bVar3 = true;
  psStack_78 = psVar11;
LAB_140c811ed:
  if ((local_res20 < psVar11) && (psVar13 <= local_res20)) {
    lVar12 = (longlong)local_res20 - (longlong)psVar13;
    if (psVar11 == local_90) {
      FUN_14000c460(&local_80,1);
      local_90 = local_70;
      psVar11 = psStack_78;
      psVar13 = local_80;
    }
    if (psVar11 != (short *)0x0) {
      *psVar11 = psVar13[lVar12 >> 1];
    }
    psVar11 = psVar11 + 1;
    psVar14 = local_90;
    psStack_78 = psVar11;
  }
  else {
    if (psVar11 == local_90) {
      FUN_14000c460(&local_80,1);
      local_90 = local_70;
      psVar11 = psStack_78;
      psVar13 = local_80;
    }
    if (psVar11 != (short *)0x0) {
      *psVar11 = sVar15;
    }
    psVar11 = psVar11 + 1;
    psVar14 = local_90;
    psStack_78 = psVar11;
  }
  goto joined_r0x000140c810ea;
}

