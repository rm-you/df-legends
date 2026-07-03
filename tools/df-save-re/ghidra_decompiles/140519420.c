// FUN_140519420 @ 140519420
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140493700 FUN_140493700


void FUN_140519420(longlong *param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort local_res8 [4];
  undefined1 local_res18 [16];
  
  if (*param_1 != 0) {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    local_res8[0] = *(ushort *)(param_1 + 1);
    FUN_1405bb7c0(param_2,local_res8,2);
    local_res8[0] = *(ushort *)((longlong)param_1 + 10);
    FUN_1405bb7c0(param_2,local_res8,2);
    sVar3 = 0;
    if (0 < (short)param_1[1]) {
      sVar1 = *(short *)((longlong)param_1 + 10);
      do {
        sVar2 = 0;
        if (0 < sVar1) {
          do {
            FUN_140493700((longlong)sVar2 * 0x30 + *(longlong *)(*param_1 + (longlong)sVar3 * 8),
                          param_2);
            sVar1 = *(short *)((longlong)param_1 + 10);
            sVar2 = sVar2 + 1;
          } while (sVar2 < sVar1);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < (short)param_1[1]);
    }
    return;
  }
  local_res8[0] = local_res8[0] & 0xff00;
  FUN_1405bb7c0(param_2,local_res8,1);
  return;
}

