// FUN_1402b6600 @ 1402b6600
// callees:
//   -> 1408b9be0 FUN_1408b9be0
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390


void FUN_1402b6600(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined2 uVar5;
  ulonglong uVar6;
  undefined4 local_res10 [2];
  int local_res18 [4];
  
  for (; (param_2 < param_3 &&
         ((ulonglong)(longlong)param_2 <
          (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)));
      param_2 = param_2 + 1) {
    lVar1 = (longlong)param_2 * 8;
    iVar3 = 0;
    lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20));
    plVar2 = (longlong *)(lVar4 + 0x24b0);
    if (*(longlong *)(lVar4 + 0x24b8) - *plVar2 >> 3 != 0) {
      uVar6 = 0;
      do {
        FUN_1408b9be0(*(undefined8 *)(*plVar2 + uVar6 * 8),iVar3 + 0x13,param_2);
        iVar3 = iVar3 + 1;
        uVar6 = (ulonglong)iVar3;
        lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20));
        plVar2 = (longlong *)(lVar4 + 0x24b0);
      } while (uVar6 < (ulonglong)(*(longlong *)(lVar4 + 0x24b8) - *plVar2 >> 3));
    }
    local_res18[0] = 0;
    lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20));
    plVar2 = (longlong *)(lVar4 + 0x178);
    if (*(longlong *)(lVar4 + 0x180) - *plVar2 >> 3 != 0) {
      uVar6 = 0;
      do {
        iVar3 = local_res18[0];
        lVar4 = *(longlong *)(uVar6 * 8 + *plVar2);
        uVar5 = (undefined2)param_2;
        if ((3 < *(int *)(lVar4 + 0x6b0)) &&
           ((*(byte *)(*(longlong *)(lVar4 + 0x6a8) + 3) & 4) != 0)) {
          *(int *)(lVar4 + 0x4e4) = (int)((longlong)DAT_141d779f8 - (longlong)DAT_141d779f0 >> 1);
          local_res10[0] = CONCAT22(local_res10[0]._2_2_,uVar5);
          if ((local_res10 < DAT_141d779f8) && (DAT_141d779f0 <= local_res10)) {
            lVar4 = (longlong)local_res10 - (longlong)DAT_141d779f0;
            if (DAT_141d779f8 == DAT_141d77a00) {
              FUN_14000c460(&DAT_141d779f0,1);
            }
            if (DAT_141d779f8 != (undefined4 *)0x0) {
              *(undefined2 *)DAT_141d779f8 =
                   *(undefined2 *)((longlong)DAT_141d779f0 + (lVar4 >> 1) * 2);
            }
          }
          else {
            if (DAT_141d779f8 == DAT_141d77a00) {
              FUN_14000c460(&DAT_141d779f0,1);
            }
            if (DAT_141d779f8 != (undefined4 *)0x0) {
              *(undefined2 *)DAT_141d779f8 = uVar5;
            }
          }
          DAT_141d779f8 = (undefined4 *)((longlong)DAT_141d779f8 + 2);
          if ((local_res18 < DAT_141d77da0) && (DAT_141d77d98 <= local_res18)) {
            lVar4 = (longlong)local_res18 - (longlong)DAT_141d77d98;
            if (DAT_141d77da0 == DAT_141d77da8) {
              FUN_14000c390(&DAT_141d77d98,1);
            }
            if (DAT_141d77da0 != (int *)0x0) {
              *DAT_141d77da0 = DAT_141d77d98[lVar4 >> 2];
            }
          }
          else {
            if (DAT_141d77da0 == DAT_141d77da8) {
              FUN_14000c390(&DAT_141d77d98,1);
            }
            if (DAT_141d77da0 != (int *)0x0) {
              *DAT_141d77da0 = iVar3;
            }
          }
          DAT_141d77da0 = DAT_141d77da0 + 1;
          local_res10[0] = 0;
          if ((local_res10 < DAT_141d78148) && (DAT_141d78140 <= local_res10)) {
            lVar4 = (longlong)local_res10 - (longlong)DAT_141d78140;
            if (DAT_141d78148 == DAT_141d78150) {
              FUN_14000c390(&DAT_141d78140,1);
            }
            if (DAT_141d78148 != (undefined4 *)0x0) {
              *DAT_141d78148 = DAT_141d78140[lVar4 >> 2];
            }
          }
          else {
            if (DAT_141d78148 == DAT_141d78150) {
              FUN_14000c390(&DAT_141d78140,1);
            }
            if (DAT_141d78148 != (undefined4 *)0x0) {
              *DAT_141d78148 = 0;
            }
          }
          DAT_141d78148 = DAT_141d78148 + 1;
          local_res10[0] = CONCAT22(local_res10[0]._2_2_,uVar5);
          if ((local_res10 < DAT_141d77a10) && (DAT_141d77a08 <= local_res10)) {
            lVar4 = (longlong)local_res10 - (longlong)DAT_141d77a08;
            if (DAT_141d77a10 == DAT_141d77a18) {
              FUN_14000c460(&DAT_141d77a08,1);
            }
            if (DAT_141d77a10 != (undefined4 *)0x0) {
              *(undefined2 *)DAT_141d77a10 =
                   *(undefined2 *)((longlong)DAT_141d77a08 + (lVar4 >> 1) * 2);
            }
          }
          else {
            if (DAT_141d77a10 == DAT_141d77a18) {
              FUN_14000c460(&DAT_141d77a08,1);
            }
            if (DAT_141d77a10 != (undefined4 *)0x0) {
              *(undefined2 *)DAT_141d77a10 = uVar5;
            }
          }
          DAT_141d77a10 = (undefined4 *)((longlong)DAT_141d77a10 + 2);
          if ((local_res18 < DAT_141d77db8) && (DAT_141d77db0 <= local_res18)) {
            lVar4 = (longlong)local_res18 - (longlong)DAT_141d77db0;
            if (DAT_141d77db8 == DAT_141d77dc0) {
              FUN_14000c390(&DAT_141d77db0,1);
            }
            if (DAT_141d77db8 != (int *)0x0) {
              *DAT_141d77db8 = DAT_141d77db0[lVar4 >> 2];
            }
          }
          else {
            if (DAT_141d77db8 == DAT_141d77dc0) {
              FUN_14000c390(&DAT_141d77db0,1);
            }
            if (DAT_141d77db8 != (int *)0x0) {
              *DAT_141d77db8 = iVar3;
            }
          }
          DAT_141d77db8 = DAT_141d77db8 + 1;
          local_res10[0] = 0;
          if ((local_res10 < DAT_141d78160) && (DAT_141d78158 <= local_res10)) {
            lVar4 = (longlong)local_res10 - (longlong)DAT_141d78158;
            if (DAT_141d78160 == DAT_141d78168) {
              FUN_14000c390(&DAT_141d78158,1);
            }
            if (DAT_141d78160 != (undefined4 *)0x0) {
              *DAT_141d78160 = DAT_141d78158[lVar4 >> 2];
            }
          }
          else {
            if (DAT_141d78160 == DAT_141d78168) {
              FUN_14000c390(&DAT_141d78158,1);
            }
            if (DAT_141d78160 != (undefined4 *)0x0) {
              *DAT_141d78160 = 0;
            }
          }
          DAT_141d78160 = DAT_141d78160 + 1;
        }
        lVar4 = *(longlong *)
                 (uVar6 * 8 +
                 *(longlong *)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + 0x178));
        if ((0xd < *(int *)(lVar4 + 0x6b0)) &&
           ((*(byte *)(*(longlong *)(lVar4 + 0x6a8) + 0xd) & 2) != 0)) {
          *(int *)(lVar4 + 0x4e8) = (int)((longlong)DAT_141d77a28 - (longlong)DAT_141d77a20 >> 1);
          local_res10[0] = CONCAT22(local_res10[0]._2_2_,uVar5);
          if ((local_res10 < DAT_141d77a28) && (DAT_141d77a20 <= local_res10)) {
            lVar4 = (longlong)local_res10 - (longlong)DAT_141d77a20;
            if (DAT_141d77a28 == DAT_141d77a30) {
              FUN_14000c460(&DAT_141d77a20,1);
            }
            if (DAT_141d77a28 != (undefined4 *)0x0) {
              *(undefined2 *)DAT_141d77a28 =
                   *(undefined2 *)((longlong)DAT_141d77a20 + (lVar4 >> 1) * 2);
            }
          }
          else {
            if (DAT_141d77a28 == DAT_141d77a30) {
              FUN_14000c460(&DAT_141d77a20,1);
            }
            if (DAT_141d77a28 != (undefined4 *)0x0) {
              *(undefined2 *)DAT_141d77a28 = uVar5;
            }
          }
          DAT_141d77a28 = (undefined4 *)((longlong)DAT_141d77a28 + 2);
          if ((local_res18 < DAT_141d77dd0) && (DAT_141d77dc8 <= local_res18)) {
            lVar4 = (longlong)local_res18 - (longlong)DAT_141d77dc8;
            if (DAT_141d77dd0 == DAT_141d77dd8) {
              FUN_14000c390(&DAT_141d77dc8,1);
            }
            if (DAT_141d77dd0 != (int *)0x0) {
              *DAT_141d77dd0 = DAT_141d77dc8[lVar4 >> 2];
            }
          }
          else {
            if (DAT_141d77dd0 == DAT_141d77dd8) {
              FUN_14000c390(&DAT_141d77dc8,1);
            }
            if (DAT_141d77dd0 != (int *)0x0) {
              *DAT_141d77dd0 = iVar3;
            }
          }
          DAT_141d77dd0 = DAT_141d77dd0 + 1;
          local_res10[0] = 0;
          if ((local_res10 < DAT_141d78178) && (DAT_141d78170 <= local_res10)) {
            lVar4 = (longlong)local_res10 - (longlong)DAT_141d78170;
            if (DAT_141d78178 == DAT_141d78180) {
              FUN_14000c390(&DAT_141d78170,1);
            }
            if (DAT_141d78178 != (undefined4 *)0x0) {
              *DAT_141d78178 = DAT_141d78170[lVar4 >> 2];
            }
          }
          else {
            if (DAT_141d78178 == DAT_141d78180) {
              FUN_14000c390(&DAT_141d78170,1);
            }
            if (DAT_141d78178 != (undefined4 *)0x0) {
              *DAT_141d78178 = 0;
            }
          }
          DAT_141d78178 = DAT_141d78178 + 1;
        }
        local_res18[0] = iVar3 + 1;
        uVar6 = (ulonglong)local_res18[0];
        lVar4 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20));
        plVar2 = (longlong *)(lVar4 + 0x178);
      } while (uVar6 < (ulonglong)(*(longlong *)(lVar4 + 0x180) - *plVar2 >> 3));
    }
  }
  return;
}

