// FUN_1400b2ca0 @ 1400b2ca0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 1400b2ec0 FUN_1400b2ec0


ulonglong FUN_1400b2ca0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  uint *local_48;
  ulonglong uStack_40;
  uint *local_38;
  ulonglong uStack_30;
  
  uVar4 = (*param_2 - *param_1 >> 2) * 0x20 + param_2[1];
  if (param_3 != 0) {
    if (-param_1[3] - 1U < param_3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<bool> too long");
    }
    local_res8[0] = 0;
    FUN_1400b2ec0(param_1,param_3 + 0x1f + param_1[3] >> 5,local_res8);
    uVar3 = param_1[3];
    if (uVar3 == 0) {
      param_1[3] = param_3;
    }
    else {
      local_38 = (uint *)*param_1;
      uStack_30 = 0;
      if (uVar3 != 0) {
        if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
          lVar2 = (-uVar3 - 1 >> 5) * -4 + -4;
        }
        else {
          lVar2 = (uVar3 >> 5) * 4;
        }
        local_38 = (uint *)((longlong)local_38 + lVar2);
        uStack_30 = (ulonglong)((uint)uVar3 & 0x1f);
      }
      uVar3 = uVar3 + param_3;
      uStack_40 = 0;
      param_1[3] = uVar3;
      puVar1 = (uint *)*param_1;
      local_48 = puVar1;
      if (uVar3 != 0) {
        if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
          lVar2 = (-uVar3 - 1 >> 5) * -4 + -4;
        }
        else {
          lVar2 = (uVar3 >> 5) * 4;
        }
        local_48 = (uint *)((longlong)puVar1 + lVar2);
        uStack_40 = (ulonglong)((uint)uVar3 & 0x1f);
      }
      if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
        lVar2 = (-uVar4 - 1 >> 5) * -4 + -4;
      }
      else {
        lVar2 = (uVar4 >> 5) * 4;
      }
      while (((uint *)((longlong)puVar1 + lVar2) != local_38 || (((uint)uVar4 & 0x1f) != uStack_30))
            ) {
        if (uStack_30 == 0) {
          uStack_30 = 0x1f;
          local_38 = local_38 + -1;
        }
        else {
          uStack_30 = uStack_30 - 1;
        }
        if (uStack_40 == 0) {
          uStack_40 = 0x1f;
          local_48 = local_48 + -1;
        }
        else {
          uStack_40 = uStack_40 - 1;
        }
        if ((*local_38 & 1 << ((byte)uStack_30 & 0x1f)) == 0) {
          *local_48 = *local_48 & ~(1 << ((uint)uStack_40 & 0x1f));
        }
        else {
          *local_48 = *local_48 | 1 << ((uint)uStack_40 & 0x1f);
        }
      }
    }
  }
  return uVar4;
}

