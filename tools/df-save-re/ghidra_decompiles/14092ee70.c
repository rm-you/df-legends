// FUN_14092ee70 @ 14092ee70
// callees:


void FUN_14092ee70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((*(uint *)(param_1 + 0x150) & 1) == 0) {
    uVar5 = 0;
    iVar3 = 0;
    *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffd;
    plVar2 = *(longlong **)(param_1 + 0x138);
    uVar7 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar2)) >> 3;
    if (*(longlong **)(param_1 + 0x140) < plVar2) {
      uVar7 = uVar5;
    }
    uVar6 = uVar5;
    if (uVar7 != 0) {
      do {
        iVar3 = *(int *)(*plVar2 + 8);
        iVar4 = (int)uVar5;
        if (iVar3 < 300) {
          if (iVar3 < 200) {
            if (iVar3 < 100) {
              if (iVar3 < -99999) {
                uVar5 = (ulonglong)(iVar4 - 3);
              }
              else if (iVar3 < -9999) {
                uVar5 = (ulonglong)(iVar4 - 2);
              }
              else {
                if (-1000 < iVar3) goto LAB_14092ef3b;
                uVar5 = (ulonglong)(iVar4 - 1);
              }
              *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | 2;
            }
            else {
              uVar5 = (ulonglong)(iVar4 + 1);
            }
          }
          else {
            uVar5 = (ulonglong)(iVar4 + 2);
          }
        }
        else {
          uVar5 = (ulonglong)(iVar4 + 3);
        }
LAB_14092ef3b:
        iVar3 = (int)uVar5;
        plVar2 = plVar2 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    if ((*(uint *)(param_1 + 0x150) & 2) == 0) {
      *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
    }
    else if (*(int *)(param_1 + 0x160) != -1) {
      *(undefined4 *)(param_1 + 0x160) = DAT_1416b1980;
      iVar4 = DAT_1416b1974;
      iVar1 = DAT_1416b1974 + 0x4b0;
      *(int *)(param_1 + 0x164) = iVar1;
      if (0x626ff < iVar1) {
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        *(int *)(param_1 + 0x164) = iVar4 + -0x62250;
      }
    }
    iVar4 = (int)(*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138) >> 3);
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        iVar1 = iVar4 * 4;
        *(int *)(param_1 + 0x184) = iVar1;
        *(int *)(param_1 + 0x180) =
             ((iVar1 / 2) * -iVar3 + (iVar4 * 3 + iVar3) * iVar1) / (iVar4 * 3);
      }
      else {
        *(undefined4 *)(param_1 + 0x180) = 1;
        *(undefined4 *)(param_1 + 0x184) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x184) = iVar4 * 4;
      *(int *)(param_1 + 0x180) =
           (((iVar4 * 0xc) / 2) * iVar3 + (iVar4 * 3 - iVar3) * iVar4 * 4) / (iVar4 * 3);
    }
    *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | 1;
  }
  return;
}

