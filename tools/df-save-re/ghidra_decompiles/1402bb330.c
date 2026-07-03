// FUN_1402bb330 @ 1402bb330
// callees:
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 14000bae0 FUN_14000bae0
//   -> 1402b94b0 FUN_1402b94b0


void FUN_1402bb330(longlong *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 local_res10 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_58;
  
  uVar6 = 0;
  uVar8 = (longlong)DAT_141d79970 - (longlong)DAT_141d79968 >> 1;
  uVar5 = (longlong)DAT_141d799d0 - (longlong)DAT_141d799c8 >> 1;
  iVar2 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    local_58 = 0;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    do {
      iVar7 = (int)uVar8;
      *(int *)(*(longlong *)(local_58 + *param_1) + 0x10c) = iVar7;
      if ((local_res10 < DAT_141d79970) && (DAT_141d79968 <= local_res10)) {
        lVar3 = (longlong)local_res10 - (longlong)DAT_141d79968;
        if (DAT_141d79970 == DAT_141d79978) {
          FUN_14000c460(&DAT_141d79968,1);
        }
        if (DAT_141d79970 != (undefined2 *)0x0) {
          *DAT_141d79970 = DAT_141d79968[lVar3 >> 1];
        }
      }
      else {
        if (DAT_141d79970 == DAT_141d79978) {
          FUN_14000c460(&DAT_141d79968,1);
        }
        if (DAT_141d79970 != (undefined2 *)0x0) {
          *DAT_141d79970 = param_2;
        }
      }
      DAT_141d79970 = DAT_141d79970 + 1;
      if ((local_res18 < DAT_141d79988) && (DAT_141d79980 <= local_res18)) {
        lVar3 = (longlong)local_res18 - (longlong)DAT_141d79980;
        if (DAT_141d79988 == DAT_141d79990) {
          FUN_14000c390(&DAT_141d79980,1);
        }
        if (DAT_141d79988 != (undefined4 *)0x0) {
          *DAT_141d79988 = DAT_141d79980[lVar3 >> 2];
        }
      }
      else {
        if (DAT_141d79988 == DAT_141d79990) {
          FUN_14000c390(&DAT_141d79980,1);
        }
        if (DAT_141d79988 != (undefined4 *)0x0) {
          *DAT_141d79988 = param_3;
        }
      }
      DAT_141d79988 = DAT_141d79988 + 1;
      if ((local_res20 < DAT_141d799a0) && (DAT_141d79998 <= local_res20)) {
        lVar3 = (longlong)local_res20 - (longlong)DAT_141d79998;
        if (DAT_141d799a0 == DAT_141d799a8) {
          FUN_14000c390(&DAT_141d79998,1);
        }
        if (DAT_141d799a0 != (undefined4 *)0x0) {
          *DAT_141d799a0 = DAT_141d79998[lVar3 >> 2];
        }
      }
      else {
        if (DAT_141d799a0 == DAT_141d799a8) {
          FUN_14000c390(&DAT_141d79998,1);
        }
        if (DAT_141d799a0 != (undefined4 *)0x0) {
          *DAT_141d799a0 = param_4;
        }
      }
      DAT_141d799a0 = DAT_141d799a0 + 1;
      FUN_14000bae0(&DAT_141d799b0,*param_1 + uVar6 * 8);
      FUN_1402b94b0(&DAT_141d6dd30,*(undefined8 *)(local_58 + *param_1));
      plVar1 = *(longlong **)(*(longlong *)(local_58 + *param_1) + 0x28);
      for (plVar4 = *(longlong **)(*(longlong *)(local_58 + *param_1) + 0x20); plVar4 < plVar1;
          plVar4 = plVar4 + 1) {
        *(int *)(*plVar4 + 0x20) = iVar7;
        *(int *)(*plVar4 + 0x24) = (int)uVar5;
        if ((local_res10 < DAT_141d799d0) && (DAT_141d799c8 <= local_res10)) {
          lVar3 = (longlong)local_res10 - (longlong)DAT_141d799c8;
          if (DAT_141d799d0 == DAT_141d799d8) {
            FUN_14000c460(&DAT_141d799c8,1);
          }
          if (DAT_141d799d0 != (undefined2 *)0x0) {
            *DAT_141d799d0 = DAT_141d799c8[lVar3 >> 1];
          }
        }
        else {
          if (DAT_141d799d0 == DAT_141d799d8) {
            FUN_14000c460(&DAT_141d799c8,1);
          }
          if (DAT_141d799d0 != (undefined2 *)0x0) {
            *DAT_141d799d0 = param_2;
          }
        }
        DAT_141d799d0 = DAT_141d799d0 + 1;
        if ((local_res18 < DAT_141d799e8) && (DAT_141d799e0 <= local_res18)) {
          lVar3 = (longlong)local_res18 - (longlong)DAT_141d799e0;
          if (DAT_141d799e8 == DAT_141d799f0) {
            FUN_14000c390(&DAT_141d799e0,1);
          }
          if (DAT_141d799e8 != (undefined4 *)0x0) {
            *DAT_141d799e8 = DAT_141d799e0[lVar3 >> 2];
          }
        }
        else {
          if (DAT_141d799e8 == DAT_141d799f0) {
            FUN_14000c390(&DAT_141d799e0,1);
          }
          if (DAT_141d799e8 != (undefined4 *)0x0) {
            *DAT_141d799e8 = param_3;
          }
        }
        DAT_141d799e8 = DAT_141d799e8 + 1;
        if ((local_res20 < DAT_141d79a00) && (DAT_141d799f8 <= local_res20)) {
          lVar3 = (longlong)local_res20 - (longlong)DAT_141d799f8;
          if (DAT_141d79a00 == DAT_141d79a08) {
            FUN_14000c390(&DAT_141d799f8,1);
          }
          if (DAT_141d79a00 != (undefined4 *)0x0) {
            *DAT_141d79a00 = DAT_141d799f8[lVar3 >> 2];
          }
        }
        else {
          if (DAT_141d79a00 == DAT_141d79a08) {
            FUN_14000c390(&DAT_141d799f8,1);
          }
          if (DAT_141d79a00 != (undefined4 *)0x0) {
            *DAT_141d79a00 = param_4;
          }
        }
        DAT_141d79a00 = DAT_141d79a00 + 1;
        FUN_14000bae0(&DAT_141d79a10,plVar4);
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      local_58 = local_58 + 8;
      iVar2 = iVar2 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar6 = (ulonglong)iVar2;
    } while (uVar6 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

