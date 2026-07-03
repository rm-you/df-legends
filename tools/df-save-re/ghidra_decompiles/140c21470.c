// FUN_140c21470 @ 140c21470
// callees:
//   -> 14000d7e0 FUN_14000d7e0
//   -> 14000d840 FUN_14000d840
//   -> 14000c460 FUN_14000c460
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020


ulonglong FUN_140c21470(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ushort uVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  longlong lVar9;
  short *psVar10;
  short *psVar11;
  short local_res8 [4];
  undefined8 uVar12;
  short *local_40;
  short *psStack_38;
  short *local_30;
  short *psVar8;
  
  uVar12 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar3 = FUN_14000d7e0(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
  }
  else {
    local_40 = (short *)0x0;
    psStack_38 = (short *)0x0;
    psVar8 = (short *)0x0;
    uVar2 = 0;
    local_30 = (short *)0x0;
    psVar5 = (short *)0x0;
    psVar10 = (short *)0x0;
    psVar11 = psVar8;
    if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 != 0) {
      do {
        sVar6 = (short)psVar8;
        if (((-1 < sVar6) &&
            ((ulonglong)(longlong)sVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) &&
           (param_2 < 0x88)) {
          cVar1 = FUN_14000d840(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)sVar6 * 8) +
                                0x1a8,param_2);
          if (cVar1 != '\0') {
            local_res8[0] = sVar6;
            if ((local_res8 < psVar5) && (psVar10 <= local_res8)) {
              lVar9 = (longlong)local_res8 - (longlong)psVar10;
              if (psVar5 == psVar11) {
                FUN_14000c460(&local_40,1);
                psVar5 = psStack_38;
                psVar10 = local_40;
                psVar11 = local_30;
              }
              if (psVar5 != (short *)0x0) {
                *psVar5 = psVar10[lVar9 >> 1];
              }
            }
            else {
              if (psVar5 == psVar11) {
                FUN_14000c460(&local_40,1);
                psVar5 = psStack_38;
                psVar10 = local_40;
                psVar11 = local_30;
              }
              if (psVar5 != (short *)0x0) {
                *psVar5 = sVar6;
              }
            }
            psVar5 = psVar5 + 1;
            psStack_38 = psVar5;
          }
        }
        uVar7 = (int)psVar8 + 1;
        psVar8 = (short *)(ulonglong)uVar7;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3));
    }
    uVar3 = (longlong)psVar5 - (longlong)psVar10 >> 1;
    if (uVar3 == 0) {
      uVar4 = 0xffff;
    }
    else {
      if (1 < (uint)uVar3) {
        uVar2 = FUN_1409fc0c0();
        uVar2 = (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar3 & 0xffffffff)) + 1U);
      }
      uVar4 = psVar10[(int)uVar2];
    }
    if (psVar10 != (short *)0x0) {
      FUN_140002020(psVar10,(longlong)psVar11 - (longlong)psVar10 >> 1,2,param_4,uVar12);
    }
    uVar3 = (ulonglong)uVar4;
  }
  return uVar3;
}

