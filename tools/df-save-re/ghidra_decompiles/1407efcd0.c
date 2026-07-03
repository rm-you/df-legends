// FUN_1407efcd0 @ 1407efcd0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1407efcd0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort local_res8 [4];
  undefined1 local_res18 [8];
  
  uVar3 = 0;
  if (*param_1 == 0) {
    local_res8[0] = local_res8[0] & 0xff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    local_res8[0] = *(ushort *)(param_1 + 1);
    FUN_1405bb7c0(param_2,local_res8,2);
    uVar1 = uVar3;
    uVar4 = uVar3;
    if (0 < (short)param_1[1]) {
      do {
        local_res8[0] = CONCAT11(local_res8[0]._1_1_,*(undefined1 *)(uVar4 + *param_1));
        FUN_1405bb7c0(param_2,local_res8,1);
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
        uVar4 = uVar4 + 1;
      } while ((int)uVar2 < (int)(short)param_1[1]);
    }
  }
  if (param_1[2] != 0) {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    local_res8[0] = *(ushort *)(param_1 + 3);
    FUN_1405bb7c0(param_2,local_res8,2);
    uVar1 = uVar3;
    if (0 < (short)param_1[3]) {
      do {
        local_res8[0] = *(ushort *)(uVar1 + param_1[2]);
        FUN_1405bb7c0(param_2,local_res8,2);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar1 = uVar1 + 2;
      } while ((int)uVar2 < (int)(short)param_1[3]);
    }
    return;
  }
  local_res8[0] = local_res8[0] & 0xff00;
  FUN_1405bb7c0(param_2,local_res8,1);
  return;
}

