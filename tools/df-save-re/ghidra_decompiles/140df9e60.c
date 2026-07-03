// FUN_140df9e60 @ 140df9e60
// callees:
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140df9e60(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort local_38 [16];
  ulonglong local_18;
  
  local_18 = DAT_1410b5008 ^ (ulonglong)local_38;
  uVar6 = 0;
  lVar9 = 1;
  do {
    uVar6 = (uVar6 + *(short *)(param_3 + lVar9 * 2 + -2)) * 2;
    local_38[lVar9] = uVar6;
    lVar9 = lVar9 + 1;
  } while (lVar9 < 0x10);
  uVar8 = 0;
  if (-1 < param_2) {
    do {
      uVar6 = *(ushort *)(param_1 + 2 + uVar8 * 4);
      uVar5 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        uVar7 = (uint)local_38[uVar5];
        local_38[uVar5] = local_38[uVar5] + 1;
        uVar1 = 0;
        do {
          uVar2 = uVar1;
          uVar4 = (int)uVar5 - 1;
          uVar5 = (ulonglong)uVar4;
          uVar3 = uVar7 & 1;
          uVar7 = uVar7 >> 1;
          uVar1 = (ulonglong)(((uint)uVar2 | uVar3) * 2);
        } while (0 < (int)uVar4);
        *(ushort *)(param_1 + uVar8 * 4) = (ushort)uVar2 | (ushort)uVar3;
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)param_2);
  }
  return;
}

