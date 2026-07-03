// FUN_140ce4e90 @ 140ce4e90
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407b68c0 FUN_1407b68c0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140ce4e90(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint **ppuVar13;
  undefined1 auStack_1c8 [32];
  uint *local_1a8 [50];
  ulonglong local_18;
  
  local_18 = DAT_1410b5008 ^ (ulonglong)auStack_1c8;
  lVar4 = FUN_140ca8390();
  if (lVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 0x14c);
    iVar12 = 0;
    iVar11 = 0;
    uVar10 = 0;
    puVar6 = (uint *)0x0;
    if (uVar1 != 0xffffffff) {
      iVar8 = 0;
      iVar9 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
      if (-1 < iVar9) {
        do {
          iVar7 = iVar9 + iVar8 >> 1;
          puVar3 = *(uint **)(DAT_141d692e0 + (longlong)iVar7 * 8);
          uVar2 = *puVar3;
          puVar6 = (uint *)(ulonglong)uVar2;
          if (uVar2 == uVar1) {
            if (puVar3 != (uint *)0x0) {
              puVar6 = puVar3 + 0x56;
              uVar10 = 1;
              local_1a8[0] = puVar6;
            }
            break;
          }
          if ((int)uVar1 < (int)uVar2) {
            iVar9 = iVar7 + -1;
          }
          else {
            iVar8 = iVar7 + 1;
          }
        } while (iVar8 <= iVar9);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x140);
    if (((uVar1 != 0xffffffff) &&
        (puVar6 = (uint *)(DAT_141c53720 - DAT_141c53718 >> 3), puVar6 != (uint *)0x0)) &&
       (iVar9 = (int)puVar6 + -1, -1 < iVar9)) {
      do {
        iVar8 = iVar9 + iVar11 >> 1;
        lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar8 * 8);
        uVar2 = *(uint *)(lVar4 + 4);
        puVar6 = (uint *)(ulonglong)uVar2;
        if (uVar2 == uVar1) {
          if ((lVar4 != 0) && (uVar10 < 0x32)) {
            puVar6 = (uint *)(longlong)(int)uVar10;
            uVar10 = uVar10 + 1;
            local_1a8[(longlong)puVar6] = (uint *)(lVar4 + 0x1240);
          }
          break;
        }
        if ((int)uVar1 < (int)uVar2) {
          iVar9 = iVar8 + -1;
        }
        else {
          iVar11 = iVar8 + 1;
        }
      } while (iVar11 <= iVar9);
    }
    ppuVar13 = local_1a8;
    if (uVar10 != 0) {
      do {
        for (puVar6 = *(uint **)*ppuVar13; puVar6 < *(uint **)(*ppuVar13 + 2); puVar6 = puVar6 + 2)
        {
          lVar4 = *(longlong *)puVar6;
          if ((((*(byte *)(lVar4 + 0x20) & 1) == 0) &&
              (((*(int *)(lVar4 + 0x10) < DAT_1416b1980 ||
                ((*(int *)(lVar4 + 0x10) == DAT_1416b1980 &&
                 (*(int *)(lVar4 + 0x14) <= DAT_1416b1974)))) && (*(int *)(lVar4 + 0x24) == 2)))) &&
             (*(int *)(lVar4 + 4) == param_2)) {
            return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
          }
        }
        iVar12 = iVar12 + 1;
        ppuVar13 = ppuVar13 + 1;
      } while (iVar12 < (int)uVar10);
    }
    uVar5 = (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  else {
    uVar5 = FUN_1407b68c0(lVar4,param_2);
  }
  return uVar5;
}

